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
        for(int j=1;j<=2*n-1;j++){
            if(j<=n-i){cout<<" ";}
            else if (k<=2*i-1){
              cout<<"*";
               
               k++;
            }
            
            
            
           

        }
        cout<<endl;
    }
    return 0;
}