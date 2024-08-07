#include<iostream>
using namespace std;
bool isPrime(int n){
for(int i=2;i*i<=n;i++){
    if(n%i==0){
    return false;
}
}
return true;
}
bool reverseNum(int n)
{
  int ori=n;
         int num = 0;
    while (n > 0) {
        num = num * 10 + n % 10;
        n = n / 10;
    }

   return (ori!=num && isPrime(num));


}

int main(){
int n;
 while (cin >> n) {
        if (isPrime(n)) {
            if (reverseNum(n)) {
                cout << n << " is emirp." << endl;
            } else {
                cout << n << " is prime." << endl;
            }
        } else {
            cout << n << " is not prime." << endl;
        }
    }
}
/*
An integer greater than 1 is called a prime number if its only positive divisors (factors) are 1 and itself.
Prime numbers have been studied over the years by a lot of mathematicians. Applications of prime
numbers arise in Cryptography and Coding Theory among others.
Have you tried reversing a prime? For most primes, you get a composite (43 becomes 34). An
Emirp (Prime spelt backwards) is a Prime that gives you a different Prime when its digits are reversed.
For example, 17 is Emirp because 17 as well as 71 are Prime.
In this problem, you have to decide whether a number N is Non-prime or Prime or Emirp. Assume
that 1 < N < 1000000.
Interestingly, Emirps are not new to NTU students. We have been boarding 199 and 179 buses for
quite a long time!
Input
Input consists of several lines specifying values for N.
Output
For each N given in the input, output should contain one of the following:
1. ‘N is not prime.’, if N is not a Prime number.
2. ‘N is prime.’, if N is Prime and N is not Emirp.
3. ‘N is emirp.’, if N is Emirp.
Sample Input
17
18
19
179
199
Sample Output
17 is emirp.
18 is not prime.
19 is prime.
179 is emirp.
199 is emirp
*/
