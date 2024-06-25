#include<iostream>
#include<vector>
using namespace std;
int binsearch(int a, int b){
    
    int s=0,e=a;
int mid=s+(e-s)/2;
int ans=0;
while(s<=e){
    if(mid*b==a){
      if(a*b<0) return -mid;
      else return mid;

    }
    else if (mid*b<a){
        ans=mid;
        s=mid+1;

    }
    else {
        e=mid-1;
    }
    mid=s+(e-s)/2;
}
return ans;
}
int main()
{int a,b;
cin>>a>>b;

int ans=binsearch(abs(a),abs(b));
if(a*b<0){
    cout<<-ans;
}
else cout<<ans;


    return 0;
}