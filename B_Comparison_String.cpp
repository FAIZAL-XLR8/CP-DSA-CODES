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
        string s;
        cin >> n >> s;
        int count = 1;
        int maxCount = 1;
        for (int i = 1; i < n; ++i)
        {
            if (s[i] == s[i - 1])
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else
            {
                count = 1;
            }
        }
        cout << maxCount + 1 << endl;
    }
}
