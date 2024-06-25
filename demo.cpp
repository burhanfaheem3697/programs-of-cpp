#include <iostream>
#include <vector>
#include <unordered_map>
#include <limits.h>
#include <queue>

using namespace std;

struct Task {
    int id;
    int duration;
    int earliestStart;
    int earliestFinish;
    int latestStart;
    int latestFinish;
    int slack;
};

class CPM {
private:
public:
    unordered_map<int, vector<int>> adjList;
    unordered_map<int, Task> tasks;

    // Add a task to the network
    void addTask(int id, int duration) {
        tasks[id] = {id, duration, 0, 0, INT_MAX, INT_MAX, 0};
    }

    // Add a dependency between tasks
    void addDependency(int from, int to) {
        adjList[from].push_back(to);
    }

    // Calculate earliest start and finish times
    void calculateEarliestTimes() {
        queue<int> q;
        for (const auto& entry : tasks) {
            int taskId = entry.first;
            if (adjList[taskId].empty()) {
                q.push(taskId);
            }
        }

        while (!q.empty()) {
            int taskId = q.front();
            q.pop();

            Task& task = tasks[taskId];
            for (int neighborId : adjList[taskId]) {
                Task& neighbor = tasks[neighborId];
                neighbor.earliestStart = max(neighbor.earliestStart, task.earliestFinish);
                neighbor.earliestFinish = neighbor.earliestStart + neighbor.duration;
                q.push(neighborId);
            }
        }
    }

    // Calculate latest start and finish times
    void calculateLatestTimes() {
        // Find the maximum finish time
        int maxFinishTime = 0;
        for (const auto& entry : tasks) {
            maxFinishTime = max(maxFinishTime, entry.second.earliestFinish);
        }

        // Initialize latest times
        for (auto& entry : tasks) {
            entry.second.latestFinish = maxFinishTime;
        }

        // Perform backward pass
        queue<int> q;
        for (const auto& entry : tasks) {
            int taskId = entry.first;
            q.push(taskId);
        }

        while (!q.empty()) {
            int taskId = q.front();
            q.pop();

            Task& task = tasks[taskId];
            for (auto& neighborEntry : adjList) {
                int neighborId = neighborEntry.first;
                if (adjList[neighborId].empty()) continue;

                for (int dependentTaskId : neighborEntry.second) {
                    Task& dependentTask = tasks[dependentTaskId];
                    dependentTask.latestFinish = min(dependentTask.latestFinish, task.latestStart);
                    dependentTask.latestStart = dependentTask.latestFinish - dependentTask.duration;
                    q.push(dependentTaskId);
                }
            }
        }
    }

    // Calculate slack times and find the critical path
    void calculateSlackAndCriticalPath() {
        cout << "Critical Path: ";
        for (auto& entry : tasks) {
            Task& task = entry.second;
            task.slack = task.latestStart - task.earliestStart;
            if (task.slack == 0) {
                cout << "Task " << task.id << " -> ";
            }
        }
        cout << "End" << endl;
    }

    // Execute the CPM algorithm
    void execute() {
        calculateEarliestTimes();
        calculateLatestTimes();
        calculateSlackAndCriticalPath();
    }
};

int main() {
    CPM cpm;

    // Define tasks with their durations
    cpm.addTask(1, 1); // Send out invitations
    cpm.addTask(2, 2); // Buy decorations
    cpm.addTask(3, 1); // Bake a cake
    cpm.addTask(4, 3); // Purchase gifts
    cpm.addTask(5, 2); // Set up venue
    cpm.addTask(6, 1); // Confirm attendance

    // Define dependencies between tasks
    cpm.addDependency(1, 2); // Buying decorations depends on sending out invitations
    cpm.addDependency(2, 3); // Baking a cake can only start after buying decorations
    cpm.addDependency(1, 4); // Purchasing gifts depends on sending out invitations
    cpm.addDependency(2, 5); // Setting up the venue can only start after buying decorations
    cpm.addDependency(4, 5); // and purchasing gifts
    cpm.addDependency(1, 6); // Confirming attendance can only happen after sending out invitations

    // Execute the CPM algorithm
    cpm.execute();

    return 0;
}
