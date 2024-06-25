#include<bits/stdc++.h>
using namespace std;
int binaryexp(int x,int n){
    if(n==1) return x;
    if(n&1) return x*binaryexp(x,n-1);
    else return binaryexp(x,n/2)*binaryexp(x,n/2);
}
int main()
{
int x;
cin>>x;
int n;
cin>>n;
int ans = binaryexp(x,n);
cout<<ans<<endl;
    return 0;
}