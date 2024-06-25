#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int k;
 for(int i=1;i<=n;i++){
    k=1;
    bool a=true;
    for(int j=1;j<=17;j++){
        if(j<=9-i){
            cout<<"*";
        }
        else if (k<=2*i-1){
            if(a){
                cout<<i;
                a=false;
            }
            else{
                cout<<"*";
                a=true;
            }
            k++;
        }
        else {
            cout<<"*";
        }
    }
    cout<<endl;
 }
    return 0;

}