#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());
        int cnt = 1;
        int maxCount = 1;
        for (int i = 1; i < n; ++i)
        {
            if (abs(a[i - 1] - a[i]) <= k)
            {
                cnt++;
                maxCount = max(maxCount, cnt);
            }
            else
            {
                cnt = 1;
            }
        }
        cout << n - maxCount << endl;
    }
}