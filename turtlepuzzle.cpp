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
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i] < 0) {
                v[i]*=-1;
            }
            sum+=v[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}