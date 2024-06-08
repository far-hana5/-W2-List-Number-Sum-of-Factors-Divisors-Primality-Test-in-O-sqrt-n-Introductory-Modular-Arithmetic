
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
typedef long long ll;
int main(){
 ll  n;
cin>>n;ll sum=0;ll count=0;
while(sum<n){
    count++;
    sum=sum+count;
}
cout<<count<<endl;
}
