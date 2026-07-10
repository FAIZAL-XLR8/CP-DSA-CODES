#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (n == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        unordered_map<char, int> mp;
        for (int i = 0; i < s.length(); ++i)
        {
            mp[s[i]]++;
        }
        for (auto it = mp.begin(); it != mp.end();)
        {
            if (k == 0)
                break;
            if (it->second % 2 != 0)
            {
                it->second -= 1;
                k--;
                if (it->second == 0)
                {
                    it = mp.erase(it);
                }
                else
                    it++;
            }
            else
                it++;
        }

        int odd = 0;
        for (auto x : mp)
        {
            if (x.second % 2 != 0)
            {
                odd++;
            }
        }
        if (odd <= 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}