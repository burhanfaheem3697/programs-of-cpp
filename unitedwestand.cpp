#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
 int n;
 cin>>n;
 vector<int> a(n);
 for(int i=0;i<n;i++){
    cin>>a[i];
 }
 sort(a.begin(),a.end());
 vector<int> b;
 vector<int> c;
 for(int i=0;i<a.size()/2;i++){
    b.push_back(a[i]);
 }
 for(int i=a.size()/2;i<a.size();i++){
    c.push_back(a[i]);
 }
 int i=0;
 reverse(c.begin(),c.end());
 while(c.size() > 1){
 if(b[b.size()-1] == c[c.size()-1]){
    b.push_back(c[c.size()-1]);
    c.pop_back();
 }
 else{
    break;
 } 
 }

}

    return 0;
}