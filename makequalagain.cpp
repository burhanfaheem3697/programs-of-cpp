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
        int i=0;
        int j=n-1;
        while(i<j){
            int element=v[0];
            if(v[i] == element) i++;
            else if(v[j] == element) j--;
            else break;
            
        }
        if(n == 1) cout<<0<<endl;
        else if(n == 2) cout<<j-i+1<<endl;
        else cout<<j-i<<endl;

    }
    return 0;
}