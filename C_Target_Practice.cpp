#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> v(10, vector<char>(10));

        // Read the grid
        for (int i = 0; i < 10; ++i)
            for (int j = 0; j < 10; ++j)
                cin >> v[i][j];

        int ans = 0;

        // Calculate score
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (v[i][j] == 'X')
                {
                    int ring = min({i, j, 9 - i, 9 - j});
                    ans += (ring + 1);
                }
            }
        }

        cout << ans << "\n";
    }
}
