#include<bits/stdc++.h>
using namespace std;
bool solve(int arr[],long long int x,long long int k,long long int &n){
    //base case
    if(k == 0 && x == 0) return true; 
    for(long long int i=0;i<n;i++){
        k--;
        return solve(arr,x-arr[i],k,n);
    }
    return false;
}
int main()
{
int t;
cin>> t;
while(t--){
 long long int n,k,x;
 cin>>n>>k>>x;
 long long int sum = k*(k+1)/2;
 bool flag=false;
 for(int i=1;i<=n-k+1;i++){
    if(sum == x) {
        flag=true;
        break;
    }
    sum+=k;
 }
 if(flag) cout<<"yes"<<endl;
 else cout<<"no"<<endl;
}
    return 0;
}