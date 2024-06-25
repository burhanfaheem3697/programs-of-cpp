#include<iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int maxi=INT_MIN;
	    int maxindex=0;
	    vector<pair<int,int>> v(6);
	    for(int i=1;i<6;i++){
	        pair<int,int> p;
	        cin>>p.first>>p.second;
	        v[i]=p;
	        int score = 1*p.first + 20*p.second;
	        if(score > maxi){
	            maxindex=i;
                maxi=score;
                cout<<"maxindex : "<<maxindex <<endl;
	        }
	    }
	    cout<<maxindex<<endl;
	}
    return 0;

}