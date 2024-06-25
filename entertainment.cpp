#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> v,int i,vector<int>& ans,int& maxi){
    if(i>=v.size()) {
        // int sum=0;
        // for(int i=0;i<ans.size();i++){
        //     sum+=ans[i];
        // };
        // int maxweight=-1;
        // if(!(ans.size()==0))
        // maxweight=ans[0]*ans.size();
        // maxi=max(maxi,maxweight);
        for(auto i : ans){
            cout<<i<<" ";
        }
        cout<<endl;
        return ;
    } 
    //include
    ans.push_back(v[i]);
    solve(v,i+1,ans,maxi);
    ans.pop_back();
    //exclude
    solve(v,i+1,ans,maxi);
}
int main() {
	// your code goes hereS
	int t;
	cin>>t;
	while(t--){
	    int n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    vector<int> ans;
	    int maxi=INT_MIN;
        cout<<"hello"<<endl;
	    solve(v,0,ans,maxi);
        cout<<"uello"<<endl;
	    cout<<maxi<<endl;
	    
	}

}
