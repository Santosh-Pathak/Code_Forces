#include <bits/stdc++.h>
using namespace std;

// Function to remove "33" from a number represented as a string
string remove33(const string &s) {
    string result;
    int i = 0;
    while (i < s.size()) {
        if (i + 1 < s.size() && s[i] == '3' && s[i + 1] == '3') {
            // Skip "33"
            i += 2;
        } else {
            result += s[i];
            i++;
        }
    }
    return result;
}

bool canUnlock(long long n) {
    if (n < 33) return false; // If n is less than 33, it's impossible to reach 0
    while (n >= 33) {
        // Check if divisible by 33
        if (n % 33 == 0) return true;

        // Convert to string to try removing "33"
        string s = to_string(n);
        string reduced = remove33(s);

        // If no "33" was removed, stop
        if (s == reduced) break;

        // Convert back to integer
        n = stoll(reduced);
    }
    return false; // If the loop ends and we can't reach 0
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        if (canUnlock(n)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
