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
 int countp=0;
 int countn=0;
 for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i] == 1) countp++;
    else countn++;
 }
 int diff = countp-countn;
 int mini=0;
 if(diff == 0 || diff > 0 ){
    if(countn&1){
        mini+=1;
    }
 }
 else{
    diff = abs(diff);
    if(diff&1){
        mini+=(diff/2)+1;
        countn-=(diff/2)+1;
        countp+=(diff/2)+1;
    }
    else{
        mini+=(diff/2);
        countn-=(diff/2);
        countp+=(diff/2);

    }
    if(countn&1){
        mini+=1;
    }


 }
 cout<<mini<<endl;
 


}
    return 0;
}