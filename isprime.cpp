#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0){
            
            count++;
            break;
        }
    }
    if(count!=0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime "<<endl;
    }
    getch();
    return 0;
}