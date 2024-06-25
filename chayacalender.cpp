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
        int ans;
        for(int i=0;i<n-1;i++){
            ans=v[i];
            if(v[i] >= v[i+1]){
                int j=2;
                int a=v[i+1];
                while(a <= v[i]){
                    a=v[i+1]*j;
                    j++;
                }
                ans=a;
                v[i+1]=a;
            }
            else if(v[i+1] > v[i]){
                ans=v[i+1];
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}