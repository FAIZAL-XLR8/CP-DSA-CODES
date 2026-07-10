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
        if (k == n || k == 1)
            cout << "YES" << endl;
        else if (((k % 2) == 0) and ((n % 2) != 0))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
}
