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
