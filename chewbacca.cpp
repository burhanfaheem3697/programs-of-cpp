#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int ans=0;
int i=0;
while(n!=0){
    int rem = n%10;
  
    int digit;
    if(n == 9) {
        digit = 9;
    }
    else digit = min(rem,9-rem);
    cout<<"digit: "<<digit<<endl;
    cout<<"digit pow : "<<digit*pow(10,i)<<endl;
    cout<<"ans: "<<ans<<endl;
    ans = digit*pow(10,i) + ans;
    cout<<"ans: "<<ans<<endl;
    i++;
    n/=10;
    
}
cout<<ans<<endl;
    return 0;
}