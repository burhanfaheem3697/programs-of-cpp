#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int a,b,c;
 cin>>a>>b>>c;
 if(c&1){
    if(a == b) cout<<"First"<<endl;
    else if (a > b) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
 }
 else{
    if(a == b) cout<<"Second"<<endl;
    else if (a > b) cout<<"First"<<endl;
    else cout<<"Second"<<endl;
 }
}
    return 0;
}