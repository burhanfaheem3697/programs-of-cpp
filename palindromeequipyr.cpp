#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k=n;
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=k;j++){
            if(j<=n-i){
                cout<<" ";
            }
            else if (j<=n){
                cout<<c;
                c++;
            }
            else if (j==n+1){
                c=c-2;
                cout<<c;
                c--;
            }
            else {
                cout<<c;
                c--;
            }
        }
        k++;
        cout<<endl;

    }
    return 0;
}