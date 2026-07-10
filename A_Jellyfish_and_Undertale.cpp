#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        ll maxTime = b;
        vector<ll> x(n);
        for (int i = 0; i < n; ++i)
            cin >> x[i];
        for (int i = 0; i < n; ++i)
            maxTime += min(x[i], a - 1);
        cout << maxTime << endl;
    }
}