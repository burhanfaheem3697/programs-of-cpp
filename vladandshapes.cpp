#include<iostream>
#include<vector>
using namespace std;
bool searchfor1(vector<vector<char>> &v,int n){
    for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(v[i][j] == '1') {

                  if((i+1 < n) && (v[i+1][j] == '1') && ( j+1<n ) && (v[i][j+1] == '1')) return 1;
                  else return 0;
                
                }
            }
        }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<char>> v(n,vector<char>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>v[i][j];
            }
        }
        if(searchfor1(v,n)){
            cout<<"SQUARE"<<endl;
        }
        else cout<<"TRIANGLE"<<endl;
        

    }
    return 0;
}