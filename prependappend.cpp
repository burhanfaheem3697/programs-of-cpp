#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
int n;
cin>>n;
 string str;
 cin>>str;
 int s=0;
 int e=str.length()-1;
 while(s<=e){
    if(str[s] == '0' && str[e] == '1'){
        s++;
        e--;
    } 
    else if(str[s] == '1' && str[e] == '0'){
        s++;
        e--;
    }
    else break;
 }

if(s>e) cout<<0<<endl;
else if(s == e) cout<<1<<endl;
else cout<<e-s+1<<endl;
}

    return 0;
}