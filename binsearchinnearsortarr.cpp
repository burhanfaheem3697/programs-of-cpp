#include<iostream>
#include<vector>
using namespace std; 
int binarysearch(vector<int > v,int target){
    int s=0;
    int e=v.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(v[mid]==target){
            return mid;
        }
        else if (v[mid-1]==target && mid-1>=0){
            return mid-1;
        }
        else if (v[mid+1]==target && mid+1<v.size()){
            return mid+1;
        
        }
        else if (v[mid]>target){
            e=mid-2;
        }
        else {
            s=mid+2;
        }
        mid=s+(e-s)/2;
    }
    return -1;

}
int main(){
    vector<int > v;
    v={10,3,40,20,50,80,70};
    int target=40;
    int ans=binarysearch(v,target);
    
    return 0;
}