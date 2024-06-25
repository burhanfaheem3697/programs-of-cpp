#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        int maxcoins=0;
        int i=0;
        while(i<n){
            if(str[i+1] == '@'){
                maxcoins++;
                i++;
            }
            else if(str[i+1] == '*' && str[i+2] == '*'){
                break;
            }
            else if(str[i+1] == '*'){
                i++;
            }
            else{
                i++;
            }
        }
        cout<<maxcoins<<endl;
    }
    return 0;
}