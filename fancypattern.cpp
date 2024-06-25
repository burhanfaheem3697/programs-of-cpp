#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=1;
    for(int i=1;i<=n;i++){
        bool a=true;
        for(int j=1;j<=2*i-1;j++){
            if(a){
                cout<<l;
                l++;
                a=false;
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