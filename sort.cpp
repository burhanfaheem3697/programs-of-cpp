#include<iostream>
using namespace std;
int main()
{int arr[5]={1,3,3,5,4};
int sum=0,ans=0;
for(int i=0;i<5;i++){
    sum+=arr[i];
    ans^=arr[i];
}
int sum2=0;
for(int i=0;i<5;i++){
    ans^=i+1;
    sum2+=i+1;
}
cout<<sum2-sum+ans<<endl;

    return 0;
}