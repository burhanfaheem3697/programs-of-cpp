#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int c =a | (1<<b);
    cout<<"ANS: "<<c;
    return 0;
}