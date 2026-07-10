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
        if (n < 4  || n % 2 != 0)
        {
            cout << -1 << endl;
            continue;
        }
        ll mini = 0;
        ll maxi = 0;
        maxi = n / 4;
        if ( n %6 ==0)
        {
            mini = n / 6;
        }
        else
        {
            mini = (n / 6) + 1;
        }
        cout << mini << " " << maxi << endl;
    }
}
