#include<iostream>
#include<vector>
using namespace std;
int firstocc(vector<int> v,int target){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(v[mid]==target){
            ans=mid;
            e=mid-1;
        }
        else if(v[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main(){
    vector<int> v{1,3,4,4,4,4,5,9};
    int target=4;
    cout<<"hello"<<endl;
    int indexoffirstocc=firstocc(v,target);
    if(indexoffirstocc==-1){
        cout<<"element not found"<<endl;
    }
    else{
        cout<<indexoffirstocc<<endl;
    }
    
    return 0;
}
