#include<iostream>
using namespace std; 
bool binarysearch(int arr[][3],int rows,int col,int target){
int s=0;
int e=rows*col-1;
int mid=s+(e-s)/2;

while(s<=e){
    int rowindex=mid/col;
    int colindex=mid%col;
    if(arr[rowindex][colindex]==target){
        return true; 
    }
    else if( arr[rowindex][colindex]<target){
        s=mid+1;
    }
    else{
        e=mid-1;
    }
    mid=s+(e-s)/2;

}
return false ;
}
int main(){
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int rows=3;
int col=3;
int target=5;
cout<<"helloworld"<<endl;
bool ans=binarysearch(arr,rows,col,target);

if(ans){
    cout<<" found "<<endl;
}
else {
    cout<<" not found "<<endl;
}

    return 0;
}