#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            v[i]=data;
        }
        
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        int e=sum/n;
        bool flag=true;
        for(int i=0;i<n;i++){
            if(v[i] >= e){
                if(i+1 < n)
                v[i+1] += v[i]-e;
                v[i]=e;
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;



    }
    return 0;
}