#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int noofone=0,f=0;
        for(int i=0;i<n;i++){
            if(s[i] == '1'){
                noofone++;
                if(s[i+1]=='1' && i<n-1){
                    f=1;
                }
            }
        }
        cout<<noofone<<" "<<f<<endl;
        if(noofone&1){
            cout<<"no"<<endl;
        }
        else{
            if(noofone==2 && f==1){
                cout<<"no"<<endl;
            }
            else {
                cout<<"yes"<<endl;
            }
        }
    }
    return 0;
}