#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cond=0;
    for(int i=1;i<=2*n-1;i++){
        cond=(i<=n)? i:n-(i%n);
        for(int j=1;j<=cond;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}