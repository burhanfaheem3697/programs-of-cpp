#include<iostream>
using namespace std;
int main()
{  int n;
cin>>n;
    
    
     for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<n-j+1<<" ";
    }
    for(int j=2*n-3;j>=2*i-1;j--){
        cout<<n-i+1<<" ";
    }
    for(int j=1;j<=i;j++){
        if(n-i+j==1){
            continue;
        }
        cout<<n-i+j<<" ";
    }
    cout<<endl;
    
    
}
for(int i=n-1;i>=1;i--){
    for(int j=1;j<=i;j++){
        cout<<n-j+1<<" ";
    }
    for(int j=2*n-3;j>=2*i-1;j--){
        cout<<n-i+1<<" ";
    }
    for(int j=1;j<=i;j++){
        if(n-i+j==1){
            continue;
        }
        cout<<n-i+j<<" ";
    }
    cout<<endl;
    
    
}
    return 0;
}