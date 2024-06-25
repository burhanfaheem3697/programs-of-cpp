#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 long long int n,k,x;
 cin>>n>>k>>x;
 long long int sum1=0;
 long long int sum2=0;
 sum1 = k*(k+1)/2;
 sum2 = k*(2*n - k + 1)/2;
 if(sum1 <= x && x <=sum2) cout<<"Yes"<<endl;
 else cout<<"No"<<endl;
}
    return 0;
}