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
        cin>>s;
        reverse(begin(s),end(s));
        string ans = "";
        for(auto x : s)
        {
            if(x=='p')
            {
                ans+='q';
            }
            else if(x=='q')
            {
                ans+='p';
            }
            else{
                ans+=x;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}