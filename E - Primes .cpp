#include<bits/stdc++.h>

using namespace std;
bool prime[10000002];

pair<int, int> findSum(const vector<int>& nums, int target) {
unordered_map<int, int> m;
    for (int i = 0; i < nums.size(); ++i) {
        int complement = target- nums[i];
        if (m.find(complement) != m.end()) {
            return make_pair(nums[i], complement);
        }
        m[nums[i]] = i;
    }
    return make_pair(-1, -1);
}
int main(){
    int n;vector<int>v;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==false){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==false)v.push_back(i);
    }
    pair<int, int> result = findSum(v, n);
     if (result.first != -1 && result.second != -1) {
      cout << result.first << " " << result.second <<endl;
    } else {
        cout <<-1<<endl;
    }
return 0;
}
