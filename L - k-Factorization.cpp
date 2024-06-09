
#include <iostream>
#include <vector>

using namespace std;

vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1) {
        factors.push_back(n);
    }
    return factors;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> factors = factorize(n);

    if (factors.size() < k) {
        cout << -1 << endl;
        return 0;
    }

    while (factors.size() > k) {
        int a = factors.back();
        factors.pop_back();
        int b = factors.back();
        factors.pop_back();
        factors.push_back(a * b);
    }

    for (int i = 0; i < factors.size(); ++i) {
        cout << factors[i] << " ";
    }
    cout << endl;

    return 0;
}

