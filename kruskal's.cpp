#include<bits/stdc++.h>
using namespace std;
bool cmp(vector<int> &a,vector<int> &b){
    return a[2]<b[2];
}
void makeset(vector<int>& parent ,vector<int> &rank,int n){
    for(int i=0;i<n;i++){
        parent[i]=i;
        rank[i]=0;
    }
}
int findparent(vector<int> &parent,int node){
    if(parent[node] == node) {
        return node;
    }
    return parent[node]=findparent(parent,parent[node]);
}
void unionset(int u,int v,vector<int>& parent,vector<int>& rank){
    int u = findparent(parent,u);
    int v = findparent(parent,v);
    if(rank[u] < rank[v]){
        parent[u]=v;
    }
    else if(rank[u] > rank[v]){
        parent[v]=u;
    }
    else{
        parent[u]=v;
        rank[v]++;
    }
}
int main()
{   int n=edge.size();
    vector<int> parent(n);
    vector<int> rank(n);
    sort(edge.begin(),edge.end(),cmp);
    int minweight=0;
    for(int i=0;i<edge.size();i++){
        int u = findparent(parent,edge[i][0]);
        int v = findparent(parent,edge[i][1]);
        int w = edge[i][2];
        if(u!=v){
            minweight+=w;
            unionset(u,v,parent,rank);
        }
    }
    cout<<minweight<<endl;
    return 0;
}