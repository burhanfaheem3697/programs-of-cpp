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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n-1;i++){
            if(v[i-1] < v[i] && v[i] > v[i+1] ){
                swap(v[i+1],v[i]);
            }
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(v[i] > v[i+1]){
                flag=false;
                break;
            }
        }
        if(flag) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}