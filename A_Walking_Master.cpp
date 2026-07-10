#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int xorVal = 0;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            xorVal ^= a[i];
        }
        if (n % 2 == 0)
        {
            if (xorVal == 0)
            {
                cout << 0 << endl;
                continue;
            }
            cout << -1 << endl;
        }
        else
            cout << xorVal << endl;
    }
}