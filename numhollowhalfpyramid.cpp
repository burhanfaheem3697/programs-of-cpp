#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=i;j<=n;j++){
            if(i==1||i+k==n+1||k==1)
            cout<<j<<" ";
            else{
                cout<<"  ";
            }
            k++;
        }
        cout<<endl;
    }
    return 0;
}