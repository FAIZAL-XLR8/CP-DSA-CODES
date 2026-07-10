#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        int miniDiff = INT_MAX;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        bool flag = true;
        for (int i = 0; i < n - 1; ++i)
        {
            if (a[i] > a[i + 1])
            {
                flag = false;
                break;
            }
            miniDiff = min(miniDiff, (a[i + 1] - a[i]));
        }
        if (!flag)
        {
            cout << 0 << endl;
        }
        else
            cout << (miniDiff / 2) + 1 << endl;
    }
}