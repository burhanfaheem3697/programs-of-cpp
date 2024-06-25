#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      int n;
      cin >> n;
      vector<int> v(n + 1);
      for (int i = 1; i < n + 1; i++)
      {
         cin >> v[i];
      }
      
    
      vector<int> ans;
      for (int i = 1; i < n + 1; i++)
      {
         if (i != v[i])
         {
            ans.push_back(i);
         }
      }
      
      int a = 1;
      for(int i=1;i<=n-1;i++){
         int j=0;
         for(;j<ans.size();j++){
            if((v[ans[j]] - ans[j])%i != 0){
               break;
            }
         }
         if(j == ans.size()){
             a = i;
         }
      }
      cout << a << endl;
   }
   return 0;
}