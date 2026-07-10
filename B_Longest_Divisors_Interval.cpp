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
        int i = 1;
        while (true)
        {
            if (n % i != 0)
                break;
            i++;
        }
        cout << i - 1 << endl;
    }
}