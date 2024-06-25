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
 int mini=INT_MAX;
 bool flag=true;
 for(int i=0;i<n;i++){
    cin>>v[i];
    
 }
 for(int i=0;i<n-1;i++){
    if((v[i+1] < v[i]))  flag = false;
    int diff = v[i+1] - v[i];
    mini = min(mini,diff);
 }
 if(flag)
 cout<<(mini/2)+1<<endl;
 else cout<<0<<endl;
}
    return 0;
}