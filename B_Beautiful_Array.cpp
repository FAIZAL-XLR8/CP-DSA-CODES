#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        ll minSum = k * b;
        ll maxSum;

        if (b == 0)
            maxSum = n * (k - 1);
        else
            maxSum = k * b + n * (k - 1);

        if (s < minSum || s > maxSum) {
            cout << -1 << endl;
            continue;
        }

        vector<ll> ans(n, 0);

        if (b == 0) {
            for (int i = 0; i < n; i++) {
                ans[i] = min(k - 1, s);
                s -= ans[i];
            }
        } else {
            ans[0] = min(k * (b + 1) - 1, s);
            s -= ans[0];

            for (int i = 1; i < n; i++) {
                ans[i] = min(k - 1, s);
                s -= ans[i];
            }
        }

        for (ll x : ans)
            cout << x << " ";
        cout << endl;
    }
}
