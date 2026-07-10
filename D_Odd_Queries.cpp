#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        ll sum = 0;
        vector<ll> prefixSum(n + 1, 0);
        prefixSum[0] = 0;
        for (int i = 1; i <= n; ++i)
        {
            prefixSum[i] = prefixSum[i - 1] + a[i - 1];
        }

        for (int i = 0; i < q; ++i)
        {

            long long l, r, k;
            cin >> l >> r >> k;

            ll window = r - l + 1;
            ll extraSum = window * k;
            ll newSum = prefixSum[n] - (prefixSum[r] - prefixSum[l - 1]) + extraSum;
            if (newSum % 2 == 0)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }
}
