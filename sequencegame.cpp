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
 vector<int> temp(2*n-1);
 for(int i=0;i<n;i++){
    cin>>v[i];
 }
 int j=0;
 for(int i=0;i<2*n-1;i+=2){
    temp[i]=v[j++];
 }
 for(int i=0;i<2*n-3;i+=2){
    if(temp[i] == temp[i+2]){
        temp[i+1]=-1;
    }
    else if(temp[i] < temp[i+2]){
        temp[i+1]=temp[i]-1;
    }
    else{
        temp[i+1]=temp[i+2];
    }
 }
 for(int i=0;i<2*n-1;i++){
        if(temp[i]>0)
        cout<<temp[i]<<" ";
    
 }
 cout<<endl;


}
    return 0;
}