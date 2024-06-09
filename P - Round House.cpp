
#include <bits/stdc++.h>
using namespace std;
int entrance(int n, int a, int b) {
    int final1= (a + b - 1) % n;
    if (final1 < 0) {
        final1 += n;
    }
    final1 += 1;
    return final1;
}

int main() {
    int n, a, b;
cin >> n >> a >> b;

    int result = entrance(n, a, b);
    cout << result <<endl;
}
