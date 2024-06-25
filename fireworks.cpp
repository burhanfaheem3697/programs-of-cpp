#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<bool> v(n+1,1);
    v[0]=v[1] = false;
    for(int i=2;i<n;i++){
        if(v[i]){
            int j = i;
        while(j<n){
            j+=i;
            v[j]=false;
        }
            
        }
    }

    return 0;
}