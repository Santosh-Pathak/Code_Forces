#include <iostream>
using namespace std;

// Recursive function to calculate the maximum number of coins
long long maxCoins(long long n)
{
    if (n <= 3)
        return 1;                                 // Coins with value <= 3 cannot be split further
    long long newCoin = n / 4;                    // Each split produces two coins of value ⌊x/4⌋
    return maxCoins(newCoin) + maxCoins(newCoin); // Count both coins
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin>>t;
    while (t--)
    {
        long long n; // Use long long for large values
        cin >> n;

        cout << maxCoins(n) << endl;
    }
    return 0;
}
