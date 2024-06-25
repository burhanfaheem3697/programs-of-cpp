#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int> arr,int s,int e,int target){
    if(s>e){
        return -1;
    }
    int mid=(s+e)/2;

    if(arr[mid]==target){
        return mid;
    }
    else if (arr[mid]<target){
        return binarysearch(arr,mid+1,e,target);
    }
    else {
        return binarysearch(arr,s,mid-1,target);
    }
}
int main(){
    vector<int> v{10,20,30,40,50};
    int s=0;
    int e=v.size()-1;
    int target=20;
    int ans=binarysearch(v,s,e,target);
    cout<<"the ans : "<<ans <<endl;
    return 0;
}