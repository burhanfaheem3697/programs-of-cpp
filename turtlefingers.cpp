#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,l;
        cin>>a>>b>>l;
        int count1=0;
        int count2=0;
        int x=0;
        while(l >= pow(a,x)){
     
            int temp=pow(a,x);
            if(l%temp == 0) count1++;
            x++;
        }
        int y=0;
        while(l >= pow(b,y)){
      
            int temp=pow(b,y);
            if(l%temp == 0) count2++;
            y++;
        }
        int ans=0;
        for(int i=1;i<=(count1*count2);i++){
            for(int j=0;j<count1;j++){
                for(int k=0;k<count2;k++){
                    if( l <= (pow(a,j)*pow(b,k))) ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}