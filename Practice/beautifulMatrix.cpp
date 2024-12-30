#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    pair<int, int> move;
    vector<vector<int>> matrix(5, vector<int>(5, 0));
    
    for (int i = 0; i < 5; i++) // Fix loop to start from 0
    {
        for (int j = 0; j < 5; j++) // Fix loop to start from 0
        {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1)
            {
                move.first = i;  // Row index of 1
                move.second = j; // Column index of 1
            }
        }
    }

    int count = abs(move.first - 2) + abs(move.second - 2);
    cout << count;

    return 0;
}
