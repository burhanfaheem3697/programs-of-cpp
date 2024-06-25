#include<iostream>
#include<vector>
using namespace std;
int main(){
    int a[4]={5,2,3,4};
    int b[3]={3,4,5};
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            if(a[i]==b[j]){
                b[j]=-1;
            }
        }
    }
    vector<int> arr;
    for(int i=0;i<4;i++){
        arr.push_back(a[i]);
    }
    for(int i=0;i<3;i++){
        if(b[i]!=-1){
            arr.push_back(b[i]);
        }
    }

for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
    return 0;
}