#include<iostream>
#include<vector>
using namespace std;
int main()
{   vector<int> v{5,4,3,2,1};
    for(int round =1 ;round <5; round++){
        // Step A : fetch
        int val= v[round];
        int j=round-1;
        for(;j>=0;j--){
            // Step B : compare
            if(v[j]>val){
                // Step C : shift 
                v[j+1]=v[j];
            }
            else {
                break;
            }
        }
        // Step D : copy
        v[j+1]=val;
    }
    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}