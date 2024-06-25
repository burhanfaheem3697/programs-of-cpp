#include<iostream>
#include<string>
using namespace std;
int main()
{   string name ;
    getline(cin,name);
    cout<<name<<endl;
    cout<<name.length()<<endl;
    cout<<name.empty()<<endl;
    name.push_back('A');
    cout<<name<<endl;
    name.pop_back();
    cout<<name<<endl;
    cout<<name.substr(0,4)<<endl;// substr(index,no. of char)
    string a="hello";
    string b="hell";
    if(a.compare(b)==0){
        cout<<"both strings are equal "<<endl;
    }
    else {

        cout<<"string are not equal"<<endl;
    }
    string ab="bcda";
    string bc="bcda";
    cout<<ab.compare(bc)<<endl;
    string sentence = "hello jee kaise ho saare";
    string target="jee";
    cout<<sentence.find(target)<<endl;
    string mess="this is my message";
    string hel="burhan";
    mess.replace(0,4,hel);//mess.replace(index,no. of char, str to replace)
    cout<<mess<<endl;
    string sent="ABCDEFGHIJKL";
    sent.erase(0,4);
    cout<<sent<<endl;
    return 0;
}