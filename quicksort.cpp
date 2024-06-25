#include<iostream>
using namespace std;
int partition(int arr[],int s,int e){
    int pivotindex=s;
    int pivotelement=arr[s];
    int count=0;
    for(int i=s;i<=e;i++){
        if(arr[i]<pivotelement){
            count++;
        }
    }
    int rightindex=s+count;
    swap(arr[rightindex],arr[pivotindex]);
    pivotindex=rightindex;
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex){
        if(arr[i]<=pivotelement){
            i++;
        }
        else if(arr[j]>pivotelement){
            j--;
        }
       else   swap(arr[i],arr[j]);

    }
    
    return pivotindex;
    
}
void quicksort(int arr[],int s,int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);
    //left
    quicksort(arr,s,p-1);
    //right
    quicksort(arr,p+1,e);

}
int main()
{
    int arr[]={8,1,20,30,6,5,60,5};
    int n=8;
    int s=0;
    int e=n-1;
    quicksort(arr,s,e);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}