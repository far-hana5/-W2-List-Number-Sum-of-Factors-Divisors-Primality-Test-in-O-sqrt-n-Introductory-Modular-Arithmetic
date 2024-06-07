#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;cin>>n;
    int sum=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
 int s=n/i;
            if(s != i && i!=1){
                sum+=s;
            }
        }
    }
    cout<<sum<<endl;
}

}
