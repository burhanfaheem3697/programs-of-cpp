#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        int count1,count2;
        count1=0;
        count2=0;
        for(int i=0;i<str.length();i++){
            if(str[i] == 'A') count1++;
            else  count2++;
        }
        if(count1 > count2) cout<<'A'<<endl;
        else cout<<'B'<<endl;
    }
    return 0;
}