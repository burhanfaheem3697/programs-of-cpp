#include<iostream>
#include<vector>
using namespace std;

int main(){
    float n;
    cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++){
        v.push_back(i+1);
    }
    int s=0,e=v.size()-1;
    int mid=s+(e-s)/2;
    float ans=0;
    while(s<=e){
        if(mid*mid>n){
            e=mid-1;
        }
        else if (mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else if (mid*mid==n){
            ans=mid;
            break;
        }
        mid=s+(e-s)/2;
    }
float sqrt=ans+0.5*((n-ans*ans)/ans);
    cout<<"the sqrt of no. is : "<<sqrt<<endl;
    return 0;
}