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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<int> st;
        long long totalSubsets = 1 << n; // 2^n subsets
        // Iterate over all possible subsets
        for (int mask = 0; mask < totalSubsets; ++mask)
        {
            long long subsetSum = 0;

            // For each bit in mask, check if it's set (i.e., if the element is included in the subset)
            for (int i = 0; i < n; ++i)
            {
                if (mask & (1 << i))
                { // If the i-th bit is set
                    subsetSum += a[i];
                }
            }

            st.insert(subsetSum);
            // cout<<subsetSum<<" ";
        }
        cout<<st.size();
    }

    return 0;
}