#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.length();
        if ( n == 1) {
            cout << "NET" << endl;
            continue;
        }
        int countZero = 0, countOne = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0') {
                countZero++;
            }
            else {
                countOne++;
            }
        }
        if (min(countZero, countOne) % 2 == 1) {
            cout << "DA" << endl;
        }
        else {
            cout << "NET" << endl;
        }

    }
}
