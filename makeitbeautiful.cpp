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
 int sum=0;
 for(int i=0;i<n;i++){
    cin>>v[i];
    
 }
 sum=v[0];
 bool flag=false;
 for(int i=1;i<n;i++){
    sum+=v[i];
    if(sum == v[i]){
        flag=true;
        break;
    }
 }
 if(flag) cout<<"ul"
}
    return 0;
}