#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    vector<string>s(n);
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int ans=0;
    for(auto x: s)
    {
        if(x=="++X" || x=="X++")
            ans++;
        else
            ans--;
    }
    cout<<ans<<endl;
    return 0;
}