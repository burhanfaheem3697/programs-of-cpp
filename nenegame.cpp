#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>> t;
while(t--){
   int k,q;
   cin>>k>>q;
   int a[k];
   int mini = INT_MAX;
   for(int i=0;i<k;i++) {
      cin>>a[i];
      mini = min(mini,a[i]);
   }

   int n[q];
   for(int i=0;i<q;i++) cin>>n[i];

   for(int i=0;i<q;i++)
   {
      if(n[i]<mini)
      cout<<n[i]<<" ";
      else
      cout<<mini-1<<" ";
   }

   cout<<endl;

   
}
    return 0;
}