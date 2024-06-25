#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n,k;
 cin>>n>>k;
 if(!(n&1)){
    cout<<"yes"<<endl;
 }
 else {

 if((n%k)&1) cout<<"no"<<endl;
 else cout<<"yes"<<endl;
 }


}
    return 0;
}