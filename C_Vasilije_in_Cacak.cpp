#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, x;
        cin >> n >> k >> x;

        ll minSum = (k * (k + 1)) / 2;

        ll maxSum = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;
        if (x >= minSum and x <= maxSum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}