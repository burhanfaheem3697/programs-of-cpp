#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n;
 cin>>n;
 int count=0;
 vector<int> v;
 while(n!=0){
    int rem=n%10;
    v.push_back(rem*pow(10,count));
    count++;
    n/=10;

    
 }
 cout<<count<<endl;
 for(auto i : v){
    cout<<i<<" ";
 }
 cout<<endl;
}
    return 0;
}