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
 int count0=0;
 int maxcount=INT_MIN;
 for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i] == 0){
        count0++;
    }
    else{
        count0=0;
    }
    maxcount=max(maxcount,count0);
 }
 cout<<maxcount<<endl;
}
    return 0;
}