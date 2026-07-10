#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<ll> nums(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
        }
        vector<pair<ll, ll>> range(n);
        for (int i = 0; i < n; ++i)
        {
            range[i].first = nums[i] - x;
            range[i].second = nums[i] + x;
        }
        ll l = range[0].first, r = range[0].second;
        ll ans = 0;
        for (int i = 1; i < n; ++i)
        {   
            l = max(l, range[i].first);
            r = min (r, range[i].second);
            if (l > r)
            {
                ans ++;
                l = range[i].first, r = range[i].second;
            }
        }
        cout << ans << endl;
    }
}