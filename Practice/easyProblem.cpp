#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int count = 0; // Initialize count of pairs

        // Iterate over all possible values of b
        for (int b = 1; b < n; ++b)
        {
            int a = n - b; // Calculate a
            if (a > 0)
            {
                ++count; // Valid pair (a, b) found
            }
        }

        cout  << count << endl;
    }
        return 0;
}
