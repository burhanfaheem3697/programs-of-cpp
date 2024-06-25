#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n,m,k;
 cin>>n>>m>>k;
 if( (n == m) && (m == k)) cout<<"no"<<endl;
 else if( (n >= m) &&  (k < m)) cout<<"yes"<<endl;
 else if( (n>m ) && (k>=m)){
    int x = ceil((float(n-m))/(float(m)));
    if( k >= n-x-1) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
 }
}
    return 0;
} 