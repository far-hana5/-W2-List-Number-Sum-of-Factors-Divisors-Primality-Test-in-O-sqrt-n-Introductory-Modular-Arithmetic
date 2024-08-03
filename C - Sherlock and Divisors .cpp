/*
Watson gives an integer  to Sherlock and asks him: What is the number of divisors of  that are divisible by 2?.

Input Format
First line contains , the number of testcases. This is followed by  lines each containing an integer .

Output Format
For each testcase, print the required answer in one line.

Constraints


Inputcopy	Outputcopy
2
9
8
0
3
Explanation
9 has three divisors 1, 3 and 9 none of which is divisible by 2.
8 has four divisors 1,2,4 and 8, out of which three are divisible by 2.
    */
#include<bits/stdc++.h>
using namespace std;

int main(){
int t;cin>>t;
while(t--){
    int n;cin>>n;int count=0;

        while(n%2==0){
            count++;n/=2;
        }

    cout<<count<<endl;
}
}
