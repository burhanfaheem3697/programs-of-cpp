#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n;
 cin>>n;
 string s;
 cin>>s;
 int count=1;
 int maxcount=0;
 for(int i=0;i<s.length()-1;i++){
    if(s[i] == s[i+1]){
        count++;
    }
    else count=1;
    maxcount = max(maxcount,count);
 }
 if(maxcount == 0) cout<<2<<endl;
 else
 cout<<maxcount+1<<endl;
 
}
    return 0;
}