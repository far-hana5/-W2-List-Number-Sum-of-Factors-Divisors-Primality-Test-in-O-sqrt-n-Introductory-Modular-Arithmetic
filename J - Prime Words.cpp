/*#include <bits/stdc++.h>
using namespace std;

bool isPrime(int num) {
    if (num < 2) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i * 1ll * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int getVal(string s) {
    int sum = 0;
    for (int i = 0; s[i]; i++) {
        if (islower(s[i])) {
            sum += s[i] - 'a' + 1;
        } else if (isupper(s[i])) {
            sum += s[i] - 'A' + 27;
        }
    }
    return sum;
}

int main() {
    string s;
    while (cin >> s) {
        cout << (isPrime(getVal(s)) ? "It is a prime word.\n" : "It is not a prime word.\n");
    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;

bool isPrime(long int n) {
    if (n < 2) return false;  // 0 and 1 are not prime numbers
    if (n == 2) return true;  // 2 is the only even prime number
    if (n % 2 == 0) return false;  // other even numbers are not prime
    for (int i = 3; i <= sqrt(n); i += 2) {  // check odd numbers up to sqrt(n)
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    string s;
    while (cin >> s) {
        long int num = 0;
        for (int i = 0; i != s.size(); ++i) {
            if (isupper(s[i])) num += s[i] - 'A' + 27;  // Fixed single quotes
            else if (islower(s[i])) num += s[i] - 'a' + 1;  // Fixed single quotes
        }
        if (isPrime(num)) cout << "It is a prime word." << endl;
        else cout << "It is not a prime word." << endl;
    }
    return 0;
}

