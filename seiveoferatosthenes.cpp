#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<bool> prime(n,true);
    prime[0]=prime[1]=false;
    int ans=0;
    for(int i=2;i<n;i++){
        if(prime[i]){
            ans++;
            int j=2*i;
            while(j<n){
                prime[j]=false;
                j+=i;
            }
        }
    }
    cout<<"the no. of prime nos. between 1 and "<<n<<" : "<<ans<<endl;

    return 0;

}