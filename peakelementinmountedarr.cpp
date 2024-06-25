#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr{1,2,4,5,10,5,2,1};
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else if (arr[mid]>arr[mid+1]){
            e=mid;
        }
       
        if(arr[mid-1]<arr[mid]>arr[mid+1]){
            cout<<mid<<endl;
            break;
        }
         mid=s+(e-s)/2;
    }

    return 0;
}