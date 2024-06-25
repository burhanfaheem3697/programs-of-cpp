#include<iostream>
#include<vector>
using namespace std;
int fun(int n){
    int ans=0;
    for(int i=1;i<=n/2;i++){
        if(n%i == 0) ans = i;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            v[i]=i+1;
        }
        for(int i=2;i<=n;i++){
         int ans=fun(i);
         swap(v[i-1],v[ans-1]);
        }
        int index=0;
        for(int i=0;i<n;i++){
            if(v[i] == 1) {
                index=i;
            }
        }
        cout<<"index: "<<index+1<<endl;
        cout<<"hello"<<endl;

    }
    return 0;
}