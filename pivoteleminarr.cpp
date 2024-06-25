#include<iostream>
using namespace std;
int main(){
    int arr[10]={3,4,5,6,7,8,9,0,1,2};
    int s=0,e=9;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[0]<arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    cout<<mid<<endl;
    cout<<arr[mid]<<endl;
    return 0;
}