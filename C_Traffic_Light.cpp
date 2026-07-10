#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int n; char c;
        cin >> n;
        cin >> c;

      string s;
      cin >> s;
      string str = s + s;
      int maxi = 0;
      int idx = -1;
      for (int i = 0; i < 2 * n; ++i)
      {
        if (idx == -1 and str[i] == c) idx = i;
        if (idx != -1 and str[i] == 'g')
        {
            maxi = max(maxi, i - idx);
            idx = -1;
        }
      }
      
      cout << maxi << endl;
   }
   
}