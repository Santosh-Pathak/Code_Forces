#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string canDivideWatermelon(int w) {
        // If weight is 2, it's not possible to divide into two even positive parts
        if (w <= 2 || w % 2 != 0) {
            return "NO";
        }
        return "YES";
    }
};

int main() {
    int w;
    cin >> w;
    Solution solution;
    cout << solution.canDivideWatermelon(w) << endl;
    return 0;
}
