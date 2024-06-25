#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n,x;
 cin>>n>>x;
 vector<int> v(n+2);
 v[0]=0;
 v[n+1] = x;
 for(int i=1;i<n+1;i++){
    cin>>v[i];
 }
 int mini = INT_MIN;
 for(int i=0;i<n+1;i++){
    int diff = v[i+1]-v[i];
    mini = max(mini,diff);
 }
 if( mini > 2*(v[n+1] - v[n])){
    cout<<mini<<endl;
 }
 else cout<<2*(v[n+1] - v[n])<<endl;
}
    return 0;
}