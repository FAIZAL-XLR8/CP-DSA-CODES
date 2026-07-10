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

        unordered_map<string, int> mp;
        bool flag = false;

        for (int i = 0; i < n - 1; i++)
        {
            string str = s.substr(i, 2);

            if (mp.count(str))
            {
                if (i - mp[str] >= 2)
                {
                    flag = true;
                    break;
                }
            }
            else
                mp[str] = i;
        }

        cout << (flag ? "YES" : "NO") << endl;
    }
}
