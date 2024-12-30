#include<bits/stdc++.h>
using namespace std;

// Function to determine if there are at least two ways to partition the array
bool canPartition(const vector<int>& a, int n) {
    // Check for at least two partitions
    for (int i = 1; i < n; ++i) {
       if(2*min(a[i],a[i-1])  > max(a[i],a[i-1])) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t; // Number of test cases

    while (t--) {
        int n;
        cin >> n; // Length of the array

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        // Sort the array to simplify checking partitions
        sort(a.begin(), a.end());

        // Output YES if we can partition in at least two different ways
        if (canPartition(a, n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
