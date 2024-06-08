#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int answer(){
int n;cin>>n;
vector<int>arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
sort(arr.begin(),arr.end());

ll ans=(ll)arr[0]*arr[n-1];
  vector< int>m;
    for (int i = 2; i*1ll*i <= ans; i++){
        if (ans % i == 0){
            m.push_back(i);
            if (i != ans / i)
                m.push_back(ans / i);
        }
    }
    sort(m.begin(),m.end());
if(arr==m){
    cout<<ans<<endl;
}else{
cout<<-1<<endl;
}

}
int main(){
int t;
cin>>t;
while(t--){
    answer();
}

}
