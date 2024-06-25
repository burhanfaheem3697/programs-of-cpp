#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int x=0;
while(n--){
    string str;
    cin>>str;
    
    for(int i=0;i<str.length();i++){
        if(str[i] == '+') {
            x++;
            break;
        }
        else if(str[i] == '-'){
            x--;
            break;
        }
        
    }
    
}
cout<<x<<endl;
    return 0;
}