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
     if (s[0] != s[n -1])
     {
        if (s[0] == 'a')
        s[0] = 'b';
        else
        s[0] = 'a';
     }
     
     cout << s << endl;
    }
}
