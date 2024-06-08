#include<iostream>
#include<set>
using namespace std;
int main ()
{
set<int>m;
      int n; cin >> n;
       for(int i=1; i*i<=n; i++)
    {
        if(i*i==n) m.insert(i);
        else if(n%i==0) {m.insert(i);m.insert(n/i);}
    }

    for(auto ele:m){
        cout<<ele<<" ";
    }
    return 0;
}
