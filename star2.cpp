#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k=0;
        for(int j=0;j<(2*n)-1;j++){
            if(j<n-i-1){
                cout<<" ";
            }
            else if (k<2*i+1){
                if(k%2==0) cout<<"*";
                else cout<<" ";
                k++;
            }
        }
        cout<<endl;
    }
    return 0;
}