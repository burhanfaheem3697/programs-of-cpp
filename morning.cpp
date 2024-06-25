#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
       string s;
       cin>>s;
       int count=4;
       for(int i=0;i<3;i++){
        if(s[i] == '0' && s[i+1]!= '0'){
            count+=s[i]-s[i+1]+10;
        }
        else if( s[i+1] == '0'){
            count+=s[i+1]-s[i]+10;
        }
        
        else if ((s[i+1]-'0') - (s[i]-'0') == 1 || (s[i+1]-'0') - (s[i]-'0') == -1 ){
            count++;
        }
        else {
            count+=abs((s[i+1]-'0') - (s[i]-'0')); 
        }
        
       }
       cout<<count<<endl;

    }
    return 0;
}