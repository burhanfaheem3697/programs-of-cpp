#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v{1,};
sort(v.begin(),v.end()-3);
for(int i=0;i<v.size();i++){
  cout<<v[i]<<" ";
}
    return 0;
}