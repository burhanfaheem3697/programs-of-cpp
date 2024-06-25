#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if((a&1) && (b&1)) cout<<"NO"<<endl;
        else if(a==1 || b==1) cout<<"NO"<<endl;
        else if(!(a&1) && !(b&1)) cout<<"YES"<<endl;
        else if((a&1) && !(b&1)){
            b=b/2;
            if(a == b) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
            
        }
        else if(!(a&1) && (b&1)){
            a=a/2;
            if(a == b) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
    return 0;
}