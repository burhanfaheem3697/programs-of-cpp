#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int a,b;
 cin>>a>>b;
 int xk,yk;
 cin>>xk>>yk;
 int xq,yq;
 cin>>xq>>yq;
 vector<pair<int,int>>king;
 king.push_back({xk+a,yk+b});
 king.push_back({xk+a,yk-b});
 king.push_back({xk-a,yk+b});
 king.push_back({xk-a,yk-b});
 king.push_back({xk+b,yk+a});
 king.push_back({xk+b,yk-a});
 king.push_back({xk-b,yk+a});
 king.push_back({xk-b,yk-a});
 vector<pair<int,int>> queen;
 queen.push_back({xq+a,yq+b});
 queen.push_back({xq+a,yq-b});
 queen.push_back({xq-a,yq+b});
 queen.push_back({xq-a,yq-b});
 queen.push_back({xq+b,yq+a});
 queen.push_back({xq+b,yq-a});
 queen.push_back({xq-b,yq+a});
 queen.push_back({xq-b,yq-a});
 set<pair<int,int>>st;
 for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        if(king[i].first == queen[j].first && king[i].second == queen[j].second){
            st.insert({king[i].first,king[i].second});
        }
    }
 }
 cout<<st.size()<<endl;


}
    return 0;
}