#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
       string s , t;
       cin >> s >> t;
       if (s == t)
       {
        cout << "YES" << endl;
        continue;
       }
        
        string interest = "";
        vector <int> freq  (26, 0);
       for (auto &ch : t)
       {
        freq[ch - 'A']++;
       }
       int n = s.size();
      for (int i = n - 1; i >= 0; --i)
      {
        if (freq[s[i] - 'A'] > 0)
        {
            interest += s[i];
            freq[s[i] - 'A']--;
        }
      }
        reverse(interest.begin(), interest.end());
        if (interest == t)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
