#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool differentones(vector<int>& v1,vector<int>& v2,int k){
    int i=0;
    bool ans1=true;
    bool ans2=true;
    while(i < (k/2)){
        if(v1[i] <= k){
            i++;
        }
        else {
            ans1=false;
            break;
        }
    }
    i=0;
    while(i < (k/2)){
        if(v2[i] <= k){
            i++;
        }
        else {
            ans2=false;
            break;
        }
    }
    return ans1 && ans2;

}
int main()
{ int t;
cin>>t;
while(t--){
    vector<int> v1;
    vector<int> v2;
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        v1.push_back(data);
    }
    for(int i=0;i<m;i++){
        int data;
        cin>>data;
        v2.push_back(data);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    bool flag=differentones(v1,v2,k);
    if(flag){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    

}
    return 0;
}
// 6
// 6 5 6
// 2 3 8 5 6 5
// 1 3 4 10 5

// 6 5 6
// 2 3 4 5 6 5
// 1 3 8 10 3

// 3 3 4
// 1 3 5
// 2 4 6

// 2 5 4
// 1 4
// 7 3 4 4 2

// 1 4 2
// 2
// 6 4 4 2

// 1 5 2
// 3
// 2 2 1 4 3
// YES
// NO
// YES
// YES
// NO
// NO

