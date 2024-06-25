#include<bits/stdc++.h>
using namespace std;
class heap{
    public:
    int data;
    vector<int> heaparray;
    int index;
    heap(){
        this->data = 0;
        this->index = 1;
    }
    void insertinheap(int data){
        heaparray[index] = data;
        if(index&1)
        index = 2*index;
        else index+=1;
    }
    
};
int main()
{
    int n;
    cin>>n;
vector<int> heap(n+1);
int data ;
cin>>data; 
insertinheap(heap,data,n);

    return 0;
}