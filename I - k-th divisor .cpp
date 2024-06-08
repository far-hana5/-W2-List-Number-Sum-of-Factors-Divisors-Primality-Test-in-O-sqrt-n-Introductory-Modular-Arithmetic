#include<iostream>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
set<ll>s;
void countDivisors(ll n){
for(ll i=1;i*1ll*i<=n;i++){
    if(n%i==0){
        ll x=i;
        ll y=n/i;
        s.insert(x);
        s.insert(y);
    }
}
}
int main(){
ll n,k;
cin>>n>>k;
countDivisors(n);

vector<ll>v;
v.assign(s.begin(),s.end());
if(k>v.size()){
    cout<<-1<<endl;
}else{cout<<v[k-1]<<endl;}
}
