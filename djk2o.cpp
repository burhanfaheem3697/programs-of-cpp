#include<bits/stdc++.h>
using namespace std;
vector<int> dijkstra(int V,vector<vector<int>>&adj, int S){
      priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
      vector<int> disttoV(V,INT_MAX);
      disttoV[S]=0;
      pq.push({0,S});
      while(!pq.empty()){
        int node = pq.top().second;
        int distance = pq.top().first;
        for(auto it : adj[node]){
            int v = it[0];
            int w = it[1];
            if(distance + w < disttoV(v)){
                disttoV[v]=distance + w;
                pq.push({disttoV[v],v});
            }
        }
        
      }
      return disttoV;
}
int main()
{
    int V = 3;
    int E = 3;
    int S = 2;
    vector<vector<int>>adj;
    vector<int> v1{1, 1}, v2{2, 6}, v3{2, 3}, v4{0, 1}, v5{1, 3}, v6{0, 6};
    int i = 0;
    adj[0].push_back(v1);
    adj[0].push_back(v2);
    adj[1].push_back(v3);
    adj[1].push_back(v4);
    adj[2].push_back(v5);
    adj[2].push_back(v6);

    return 0; 
}