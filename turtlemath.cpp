#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        int sum=0;
        bool flag=false;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%3 == 1){
                flag=true;
            }
        }
        if(sum%3 == 0) cout<<0<<endl;
        else if(sum%3 == 2) cout<<1<<endl;
        else {
           if(flag) cout<<1<<endl;
           else cout<<2<<endl;

        }
    }
    return 0;
}