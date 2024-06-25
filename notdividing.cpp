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
 for(int i=0;i<n;i++){
    cin>>v[i];
 }

//  for(int i=n-1;i>=1;i--){
//     if(v[i-1] == v[i]){
       
//         v[i-1]+=1;
//     }
//     else if(v[i-1]<v[i]){
//         if(v[i]%v[i-1]==0){
//             if(v[i-1] ==1){

//                 v[i-1]+=1;
//             }
//             else v[i]+=1;
//             i++;
//             continue;
//         }
//     }
//  }
for(int i=n-1;i>=1;i--){
    if(v[i]%v[i-1] == 0){
        if(v[i] == v[i-1]){
            v[i-1]+=1;
        }
        else{
            if(v[i-1]!=1){
                int ans;
                for(int j=2;j<=v[i];j++){
                    if(v[i]%j!=0){
                        ans=j;
                        break;
                    }
                }
                v[i-1]=ans;
            }
            else{
                if(v[i] == 2) v[i-1]=3;
                else{
                    int ans;
                for(int j=2;j<=v[i];j++){
                    if(v[i]%j!=0) {
                        ans=j;
                        break;
                    }
                }
                v[i-1]=ans;
                }
            }
        }
    }

}
 for(auto i: v){
    cout<<i<<" ";
 }
 cout<<endl;
}
    return 0;
}