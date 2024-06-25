#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int median;
        int medianindex;
        if(n&1){
            median=v[n/2];
            medianindex=n/2;
        }
        else {
            median=v[n/2-1];
            medianindex=n/2-1;
        }
        int count=0;
        int i=medianindex;
        while(v[i] == median){
            count++;
            i++;
        }
        cout<<count<<endl;
        
        
    }
    return 0;
}