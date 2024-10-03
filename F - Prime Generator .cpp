

#include<iostream>
#include<vector>
typedef long long ll;
using namespace std;

bool prime[1000000000];


bool isPrime(int num){
if(num<2)return false;
if(num==2)return true;
if(num%2==0)return false;
 for(int i=3;i*1ll*i<=num;i=i+2){
    if(num%i==0)return false;
 }
 return true;
}
int main(){
    int t;
    cin>>t;
    while(t--){
         ll n,m;
    cin>>m>>n;
   for(int i=m;i<=n;i++){
    if(isPrime(i)){
        cout<<i<<endl;
    }
   }

    }

return 0;
}

