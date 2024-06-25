#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        int noofevens=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(!(v[i]&1)){
                noofevens++;
            }
            
        }
        if(k == 4){
            bool flag=false;
            for(int i=0;i<n;i++){
                if(v[i]%4==0) {

                    cout<<0<<endl;
                    flag=true;
                    break;
                }
            }
            if(!flag && noofevens >= 2){
                cout<<0<<endl;
            }
            else if(!flag){
                bool flag=false;
                for(int i=0;i<n;i++){
                    if(v[i]%4 == 3){
                        cout<<1<<endl;
                        flag=true;
                        break;
                    }
                }
                if(!flag && noofevens == 1){
                    cout<<1<<endl;
                }
                else if(!flag){
                    cout<<2<<endl;
                }

            }
        


            
        }
        else{


        int count=0;
        int mincount=INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i]%k == 0) {
                mincount=0; break;
            }
            else if(v[i] < k){
                count=k-v[i];
            }
            else if(v[i] > k){
                count=(((v[i]/k)+1)*k) - v[i];
            }
            mincount=min(count,mincount);

        }
        cout<<mincount<<endl;
        }
    }
    return 0;
}