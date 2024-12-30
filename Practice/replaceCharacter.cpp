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
        string s;
        cin >> s;
        unordered_map<int, int> mp;
        int maxi = INT_MIN;
        int mini = INT_MAX;
        for (auto &x : s)
        {
            mp[s]++;
            if (mp[x] > maxi)
            {
                maxi = max(maxi, mp[x]);

            }
            if (mp[x] > mini)
            {
            mini = min(mini, mp[x]);
                
            }
        }
        auto maxChar, minChar;
        for (auto x : mp)
        {
            if (mp[x] == maxi)
            {
                maxChar = x;
            }
            if (mp[x] == mini)
            {
                minChar = x;
            }
        }

        cout << s << endl;
    }
    return 0;
}