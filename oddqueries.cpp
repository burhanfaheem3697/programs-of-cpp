#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n,q;
 cin>>n>>q;
 vector<int> v(n+1);
 vector<int> b(n+1);
 b[0]=0;
 int sum=0;
 for(int i=1;i<n+1;i++){
    cin>>v[i];
    sum+=v[i];
    b[i] = sum;
 }
 while(q--){
    int r,l,k;
    cin>>r>>l>>k;
    int sum2=b[l]-b[r-1];
    
    if(sum&1){
        if(sum2&1){
            //odd se replace ho rha hai to yes else no
            if((k&1) && (l-r+1)&1){
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
        else{
            //even se replace ho rha hai to yes else no
            if((!(k&1)) || ((k&1) && (!((l-r+1)&1)))) cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
    }
    else{
        if(sum2&1){
            //even se replace ho rha hai to yes else no
            if((!(k&1)) || ((k&1) && (!((l-r+1)&1)))) cout<<"yes"<<endl;
            else cout<<"no"<<endl;

        }
        else{
             //odd se replace ho rha hai to yes else no
            if((k&1) && (l-r+1)&1){
                cout<<"yes"<<endl;
            }
            else cout<<"no"<<endl;
        }
    }
 }
}
    return 0;
}