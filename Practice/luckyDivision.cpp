#include <bits/stdc++.h>
using namespace std;

bool isValidLuckyNumber(int n) {
    while (n) {
        int lastDigit = n % 10;
        if (lastDigit != 4 && lastDigit != 7) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    for (int i = 4; i <= n; i++) {
        if (isValidLuckyNumber(i) && n % i == 0) {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}
