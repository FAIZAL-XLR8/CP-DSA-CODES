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
        string s;
        cin >> s;
        int l = 0;
        int r = n - 1;
        while (l < r)
        {
            char left = s[l];
            char right = s[r];
            if ((left == '0' and right == '0') || (left == '1' and right == '1'))
            {
                break;
            }
            l++, r--;
        }

        cout << (r - l + 1) << endl;
    }
}