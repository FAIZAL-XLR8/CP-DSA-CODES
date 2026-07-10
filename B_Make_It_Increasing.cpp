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
        ll count = 0;
        for (int i = n - 2; i >= 0; --i)
        {
         while (a[i] >= a[i + 1])
            {
                a[i] /= 2;
                count++;
                if (a[i] == 0)
                    break;
            }
            if (a[i] == 0 and a[i+ 1]==0)
            {
                count = -1;
                break;
            }
        }
        cout << count << endl;

    }
}
