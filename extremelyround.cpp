#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
vector<int> v;
while(t--){
 int n;
 cin>>n;
 int p = log10(n)+1;
 v.push_back( 9*(p-1) + (int)(n/pow(10,p-1)));
 
}
for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
}
    return 0;
}