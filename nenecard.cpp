#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n;
 cin>>n;
 vector<int> v(n);
 unordered_map<int,int> mp;
 for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
 }
 int count=0;
 for(auto i : mp){
    if(i.second == 2) count++;
 }
 cout<<count<<endl;
}
    return 0;
}