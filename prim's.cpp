#include<bits/stdc++.h>
using namespace std;
int main()
{
//create adjacency list 
int n=5;
unordered_map<int,list<pair<int,int>>> adj;
for(int i=0;i<7;i++){
    // int u=g[i].first.first;
    // int v=g[i].first.second;
    // int w=g[i].second;
    int u;
    cin>>u;
    int v;
    cin>>v;
    int w;
    cin>>w;
    adj[u].push_back(make_pair(v,w));
    adj[v].push_back(make_pair(u,w));
}
vector<int> key(n+1);
vector<bool> mst(n+1);
vector<int> parent(n+1);

for(int i=0;i<n;i++){
    key[i]=INT_MAX;
    mst[i]=false;
    parent[i]=-1;
}

key[1]=0;
parent[1]=-1;
for(int i=1;i<n;i++){


//find the min vali node 
int mini=INT_MAX;
int u;
for(int v=1;v<=n;v++){
    if(mst[v] == false && key[v] < mini){
        u=v;
        mini=key[v];
    }
}
//mark min node as true;
mst[u]=true;
//check its adjacent node 
for(auto it: adj[u]){
    int v=it.first;
    int w=it.second;
    if(mst[v]==false && w<key[v]){
        parent[v]=u;
        key[v]=w;
    }
}

}

    return 0;
}