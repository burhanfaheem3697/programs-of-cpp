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
 int ans=0;
 for(int i=0;i<n;i++){
    cin>>v[i];
    ans^=v[i];
 }
 if(ans!=0){
    if(n&1) cout<<ans<<endl;
    else cout<<-1<<endl;
 }
 else cout<<0<<endl;
}
    return 0;
}