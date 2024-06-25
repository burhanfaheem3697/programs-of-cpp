#include<iostream>
#include<deque>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t; 
    while(t--){
        int n,m;
        cin>>n>>m;
        deque<int> dq;
        vector<int> ans;
        int prod=1;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            dq.push_back(data);
            prod*=data;
            

        }
        ans.push_back(prod%m);
        string str;
        cin>>str;
        for(int i=0;i<str.length();i++){
            if(str[i] == 'L'){
                prod=prod/dq.front();
                ans.push_back(prod%m);
                dq.pop_front();
                
            }
            else if(str[i] == 'R'){
                prod=prod/dq.back();
                ans.push_back(prod%m);
                dq.pop_back();
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}