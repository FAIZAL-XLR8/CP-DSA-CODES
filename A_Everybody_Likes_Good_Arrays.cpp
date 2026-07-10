#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isEven(ll a)
{
    return a % 2;
}
bool isOdd(ll a)
{
    return !(a % 2);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        ll temp = a[0];
        if (a.size() == 1)
        {
            cout << 0 << endl;
            continue;
        }
        int count = 0;
        for (int i = 1; i < n; ++i)
        {
            if ((isEven(temp) and isEven(a[i])) || (isOdd(temp) and isOdd(a[i])))
            {
                count++;
                temp = temp * a[i];
                continue;
            }
            temp = a[i];
        }
        cout << count << endl;
    }
}