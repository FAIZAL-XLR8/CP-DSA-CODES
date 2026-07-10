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
        vector<ll> a(n);
        vector<ll> pref(n, 0);
        vector<ll> suf(n, 0);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        pref[0] = (a[0] == 2);
        suf[n - 1] = (a[n - 1] == 2);
        for (int i = 1; i < n; ++i)
        {
            pref[i] = pref[i - 1] + (a[i] == 2);
        }
        for (int i = n - 2; i >= 0; --i)
        {

            suf[i] = suf[i + 1] + (a[i] == 2);
        }
        if (pref[n - 1] == 0)
        {
            cout << 1 << endl;
            continue;
        }
        if (pref[n - 1] % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }

        int i = 0;

        int ans = -1;
        while (i < n - 1)
        {
            if (pref[i] == suf[i + 1])
            {
                ans = i + 1;
                break;
            }
            i++;
        }
        cout << ans << endl;
    }
}