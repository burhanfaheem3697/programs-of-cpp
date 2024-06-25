#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n;
    cin>>n;
   cout<< binarysearch(arr,10,n)<<" "<<endl;

    return 0;
}