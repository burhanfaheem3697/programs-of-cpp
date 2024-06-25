#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int countdots=0;
        bool flag=false;
        for(int i=0;i<s.length();i++){
            if( i<s.length()-2 && s[i] == s[i+1] && s[i+1]== s[i+2] && s[i+2] == '.'){
                flag=true;
            }
            if(s[i]=='.'){
                countdots++;
            }
        }
        if(flag) cout<<2<<endl;
        else cout<<countdots<<endl;
    }
    return 0;
}