#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long ans = 0;

        long long seatedInRow1 = min(a, m);
        ans += seatedInRow1;
        a -= seatedInRow1;

        long long seatedInRow2 = min(b, m);
        ans += seatedInRow2;
        b -= seatedInRow2;

        long long remainingSeatsInRow1 = m - seatedInRow1;
        long long remainingSeatsInRow2 = m - seatedInRow2;
        long long remainingSeats = remainingSeatsInRow1 + remainingSeatsInRow2;
        ans += min(c, remainingSeats);
        cout << ans << "\n";
    }

    return 0;
}
