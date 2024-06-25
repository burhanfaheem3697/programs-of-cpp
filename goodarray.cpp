#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n;
 cin>>n;
 vector<int> v(n);
 int countodd=0;
 int counteven=0;
 int count=0;
 for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]&1){
        counteven=0;
        countodd++;
        if(countodd >=2){
            count++;
        }
    }
    else{
        countodd=0;
        counteven++;
        if(counteven>=2){
            count++;
        }
    }
 }
 cout<<count<<endl;
}
    return 0;
}