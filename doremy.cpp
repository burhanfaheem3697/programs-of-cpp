#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        set<int> s;
        int count=0;
        int a;
        for(int i=0;i<n;i++){
            cin>>v[i];
            a=v[0];
            if(a == v[i]){
                count++;
            }
            s.insert(v[i]);
        }
        if(s.size() > 2){
            cout<<"no"<<endl;
        }
        else if(s.size() <=2){
            int a = count;
            int b = n-count;
            if(a == b || abs(a-b) == 1 || abs(a-b) == n) cout<<"yes"<<endl;
            else cout<<"no"<<endl;

        }
    }
    return 0;
}