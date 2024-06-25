#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int cond;
    for(int i=1;i<=2*n-1;i++){
        bool a=true;
        cond=(i<=n)? 2*i-1: n-(i%n);
        for(int j=1;j<=cond;j++){
            if(a){
                cout<<count;
                a=false;
                count++;
            }
            else{
                cout<<"*";
                a=true;
            }

        }
        cout<<endl;
    }

    return 0;
}