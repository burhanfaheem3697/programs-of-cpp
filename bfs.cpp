#include<bits/stdc++.h>
using namespace std;
class graph{
    public:
    unordered_map<int,list<int>> mp;
    void addedge(int u,int v,int direction){
        mp[u].push_back(v);
        if(direction ==0){
            mp[v].push_back(u);
        }
    }
    void printadjlist(){
        for(auto node: mp){
            cout<<node.first<<" -> ";
            for(auto neighbor: node.second){
                cout<<neighbor<<" ";
            }
            cout<<endl;
        }
    }
    void bfs(int src,int nodes){
    queue<int> q;
    vector<bool> vis(nodes+1,0);
    q.push(src);
    while(!q.empty()){


    int temp = q.front();
    
    if(vis[temp] == false)
    cout<<temp<<" ";
    vis[temp]=true;
    

    q.pop();
    for(auto node: mp[temp]){
        if(vis[node] == false)
        q.push(node);
    }
    }
}
    void dfs(int src,vector<bool> &vis){
        cout<<src<<" ";
        vis[src]=true;
        for(auto node: mp[src]){
            if(!vis[node])
            dfs(node,vis);
        }
    }
    void topologicalsort(int src,vector<bool> &vis,stack<int> &st){
        vis[src]=true;
        for(auto node : mp[src]){
            if(!vis[node]){
                topologicalsort(node,vis,st);
            }
        }
        st.push(src);
    }
    void printstack(stack<int> &st){
      
        while(!st.empty()){
            cout<<st.top();
            st.pop();
        }
    }



};

int main()
{
    graph g;
    g.addedge(0,1,1);
    g.addedge(1,2,1);
    g.addedge(2,3,1);
    g.addedge(3,4,1);
    g.addedge(3,5,1);
    g.addedge(4,6,1);
    g.addedge(6,7,1);
    cout<<endl;
    // g.printadjlist();
    // cout<<endl;
    cout<<"printing bfs : ";
    g.bfs(0,7);
    // vector<bool> vis(9,0);
    // stack<int> st;
    // g.topologicalsort(0,vis,st);
    // g.printstack(st);

    return 0;
}