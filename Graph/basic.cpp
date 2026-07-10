#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    // vector<vector<int>> arr(n + 1, vector<int>(n + 1, 0));

    // for (int i = 0; i < m; ++i)
    // {
    //     int u, v;
    //     cin >> u >> v;
    //     arr[u][v] = 1;
    //     arr[v][u] = 1;
    // }
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= n; ++j)
    //         cout << arr[i][j] << " ";
    //     cout << endl;
    // }
    vector<int> adj[n + 1];
    adj[0].push_back(0);
    for (int i = 0; i < m; ++i)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for (auto x : adj)
    {
        for (auto y : x)
            cout << y << " ";
        cout << endl;
    }
    return 0;
}