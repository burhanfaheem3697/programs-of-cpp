#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n,k;
 cin>>n>>k;
 string s;
 cin>>s;
 set<char> st;
 for(int i=0;i<n;i++){
    st.insert(s[i]);
 }
 if((n-k)&1) {
   if(st.size() <= ((n-k)/2+1)+k) cout<<"yes"<<endl;
   else cout<<"no"<<endl;
 }
 else{
   if(st.size() <= (n-k)/2+k) cout<<"yes"<<endl;
   else cout<<"no"<<endl;
 }


}
    return 0;
}