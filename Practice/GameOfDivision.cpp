#include <bits/stdc++.h>
#include <vector>
using namespace std;

void solve()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1 && n % k == 0)
        {

        }
        // Check if there's any pair where the absolute difference is not divisible by k
        bool found = false;
        int chosenIndex = -1;
        for (int i = 0; i < n && !found; i++)
        {
            for (int j = 0; j < n && !found; j++)
            {
                if (i != j && abs(a[i] - a[j]) % k == 0)
                {
                    found = true;
                    break;
                    // chosenIndex = i + 1; // Indices are 1-based
                }
                else
                {
                    chosenIndex = j+1;
                }
            }
            if(found){
                break;
            }
        }

        if (!found)
        {
            cout << "YES" << endl;
            cout << chosenIndex << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
