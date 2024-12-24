#include <bits/stdc++.h>
using namespace std;

void solve(long long l, long long r, long long G) {
    // Find the largest multiple of G <= r
    long long B = (r / G) * G;
    
    // Find the smallest multiple of G >= l
    long long A = ((l + G - 1) / G) * G;  // This ensures A is the first multiple of G >= l
    
    if (A > r || B < l) {
        // If no valid pair exists
        cout << "-1 -1" << endl;
        return;
    }

    // Check if GCD(A, B) is G
    if (__gcd(A, B) == G) {
        cout << A << " " << B << endl;
    } else {
        cout << "-1 -1" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long l, r, G;
        cin >> l >> r >> G;
        solve(l, r, G);
    }

    return 0;
}
