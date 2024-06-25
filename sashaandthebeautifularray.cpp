#include<iostream>
#include<algorithm>
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
      int sum=0;
      sort(v.begin(),v.end());
      for(int i=0;i<n-1;i++){
        sum+=v[i+1]-v[i];
      }
      cout<<sum<<endl;
    }
    return 0;
}