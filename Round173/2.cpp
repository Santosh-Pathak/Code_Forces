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
        /* code */
        int n, d;
        cin >> n >> d;
        if (d == 0)
        {
            cout << endl;
            continue;
        }
        else if (n == 1)
        {
            for (int i = 1; i < 9; i++)
            {
                if (d % i == 0)
                {
                    cout << i << " ";
                }
            }
        }
        else
        {
            cout << 1 << " ";
            int num = d * 10 + d;
            int sum = 0;
            n=d*n;
            if (sum % 3 == 0)
            {
                cout << 3 << " ";
            }
            if (d == 0 || d == 5)
            {
                cout << 5 << " ";
            }
            n = d*n;
            int last = d;
            last = last * 2;
            n -= last;
            if (n % 7 == 0)
            {
                cout << 7 << " " ;
            }
            if (sum % 9 == 0)
            {
                cout << 9;
            }
        }
        cout << endl;
    }

    return 0;
}