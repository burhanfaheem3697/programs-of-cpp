#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int a,b,c,d;
 cin>>a>>b>>c>>d;
 int moves=0;
 if(d-b>=0){
    moves+=d-b;
    a = a+d-b;
    if(a>=c){
        moves+=a-c;
        cout<<moves<<endl;
    }
    else{
        cout<<-1<<endl;
    }
 }
 else cout<<-1<<endl;
}
    return 0;
}