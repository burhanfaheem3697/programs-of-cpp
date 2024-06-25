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
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int maxindex;
 int minindex;
 int minelement = INT_MAX;
 int maxelement = INT_MIN;
 int a=INT_MIN,c = INT_MIN;
 for(int i=0;i<n;i++){
    if(v[i] <= minelement){
        minelement = v[i];
        minindex = i;
        if(minindex>=1)
        a = max(a,v[minindex-1]-minelement);
    }
    if(v[i] >= maxelement){
        maxelement = v[i];
        maxindex = i;
        if(maxindex<n-1)
        c = max(c,maxelement - v[maxindex+1]);
    }
 }
 if(minindex == 0 || maxindex == n-1){
    cout<<maxelement - minelement<<endl;
 }
 else{
   
    int b = v[n-1] - minelement;
    int d = maxelement - v[0];
    cout<<max(a,max(b,max(c,d)))<<endl;
 }
 
 
 
}
    return 0;
}