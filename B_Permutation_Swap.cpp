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
        vector<ll> p(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> p[i];
        }
        ll gcd = 0;
        for (int i = 0; i < n; ++i)
        {
            gcd = __gcd(gcd, abs(p[i] - (i + 1)));
        }
        cout << gcd << endl;
    }
}
