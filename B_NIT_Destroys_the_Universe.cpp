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
        ll countZero = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            if (a[i] == 0)
                countZero++;
        }
        if (countZero == n)
        {
            cout << 0 << endl;
            continue;
        }
        countZero = 0;
        int left = 0, right = n - 1;
        while (left < n && a[left] == 0)
        {
            left++;
        }
        while (right >= 0 && a[right] == 0)
        {
            right--;
        }
        for (int i = left; i <= right; ++i)
        {
            if (a[i] == 0)
                countZero++;
        }
        if (countZero == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
}
