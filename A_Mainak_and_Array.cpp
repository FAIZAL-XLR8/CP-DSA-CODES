#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        ll mini = INT_MAX;
        ll maxi = INT_MIN;
        for (int i = 0; i < n; ++i)
        {
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
        }
        cout << maxi - mini << endl;
    }
}
