#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        bool flag=false;
        int tents=0;
        tents = a;
        tents+=b/3;
        int remextroverts = b - (b/3)*3;
        if(remextroverts == 0){
            flag=true;
            tents+=c/3;
            int remuniversals  = c - (c/3)*3;
            if(remuniversals == 1 || remuniversals == 2){
                tents+=1;
            }
        }
        else if(remextroverts == 1 && c>=2){
            flag=true;
            c = c-2;
            tents+=1;
            tents+=c/3;
            int remuniversals  = c - (c/3)*3;
            if(remuniversals == 1 || remuniversals == 2){
                tents+=1;
            }
        }
        else if(remextroverts == 2 && c>=1){
            flag=true;
            c = c-1;
            tents+=1;
            tents+=c/3;
            int remuniversals  = c - (c/3)*3;
            if(remuniversals == 1 || remuniversals == 2){
                tents+=1;
            }

        }
        if(flag) cout<<tents<<endl;
        else cout<<-1<<endl;
        
       
        
    }
    return 0;
}