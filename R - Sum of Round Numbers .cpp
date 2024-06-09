
#include <bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;

while(t--){
    int n;cin>>n;
    int i=0;vector<int>v;
    while(n>0){
       int rem=n%10;
        int num=rem * pow(10,i);
        if(num>0){
                    v.push_back(num);
        }

        i++;n=n/10;
    }
    cout<<v.size()<<endl;
    for(int j=0;j<v.size();j++){
         cout<<v[j]<<" ";

    }
    cout<<endl;
}

}
