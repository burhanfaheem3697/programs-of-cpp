#include<iostream>
using namespace std;
int main()
{   
    int arr[5]={5,4,3,2,1};
    for(int i=1;i<5;i++){
        bool flag=true ;
        for(int j=0;j<5-i;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            }

        }
        if(flag){
            break;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}