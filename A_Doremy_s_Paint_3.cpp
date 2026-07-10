#include <bits/stdc++.h>
using namespace std;
bool helper(int a, int b, int c)
{
    return ((a < b) and (b < c));
}
int main()

{
    int t;
    cin >> t;
    string ans;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        int ctr = 0;
        int ans = -1;
        bool flag = true;
        while (x.length() < 2 * s.length())
        {
            if (x.find(s) != string ::npos)
                break;
            x += x;
            ctr++;
        }

        if (x.length() >= s.length() and flag)
        {
            if (x.find(s) != string ::npos)
            {
                ans = ctr;
                flag = false;
            }
            x += x;
            ctr++;
        }
        if (flag)
        {
            if (x.find(s) != string ::npos)
                ans = ctr;
        }
        cout << ans << endl;
    }
}
