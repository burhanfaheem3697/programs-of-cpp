#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<vector<int>> v(5,vector<int>(5));
pair<int,int> p;
for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
        cin>>v[i][j];
        if(v[i][j] == 1) p = {i,j};
    }
}
cout<<abs(p.first-2)+abs(p.second-2)<<endl;
    return 0;
}