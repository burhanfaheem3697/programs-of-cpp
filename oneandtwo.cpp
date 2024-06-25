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
 int count2=0;
 for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i] == 2) count2++;
 }
 if(count2&1){
    cout<<-1<<endl;
 }
 else{
   int i=0;
   int count=0;
   while(1){
    if(count == count/2) break;
    if(v[i] == 2){
        count++;
    }
    i++;
   }
 }
}
    return 0;
}