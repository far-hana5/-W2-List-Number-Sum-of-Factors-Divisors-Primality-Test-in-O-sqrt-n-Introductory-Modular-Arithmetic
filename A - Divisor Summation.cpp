#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                if (i != n) {
                    sum += i;  
                }
                int s = n / i;
               if(n/i !=i  && i!=1){
                    sum += s;  
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}

/*
Given a natural number n (1 <= n <= 500000), please output the summation of all its proper divisors.

Definition: A proper divisor of a natural number is the divisor that is strictly less than the number.

e.g. number 20 has 5 proper divisors: 1, 2, 4, 5, 10, and the divisor summation is: 1 + 2 + 4 + 5 + 10 = 22.

Input
An integer stating the number of test cases (equal to about 200000), and that many lines follow, each containing one integer between 1 and 500000 inclusive.

Output
One integer each line: the divisor summation of the integer given respectively.

Example
Sample Input:
3
2
10
20

Sample Output:
1
8
22
*/
