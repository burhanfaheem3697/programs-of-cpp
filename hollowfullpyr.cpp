#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int k=1;
        for(int j=1;j<=2*n-1;j++){
            if(j<=n-i){
                cout<<"  ";
            }
            
            else if(k<=2*i-1){
                if(k==1||k==2*i-1||i==n)
                cout<<"# ";
                else cout<<"  ";
                k++;
            }
            else {
                
            }
           
        }
        cout<<endl;
    }
    return 0;
}