#include<iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int >&arr){
    
    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
    }
}
int main()
{  
    int n;
    cin>>n;
     vector<int > arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}