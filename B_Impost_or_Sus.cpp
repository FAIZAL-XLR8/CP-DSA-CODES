#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

    int t;
    cin >> t;
    while (t--)
    {
      string r;
      cin >> r;
      int n = r.size();
      int ops = 0;
     if (r[0] != 's') 
     {
        ops++;
        r[0] = 's';
     }
     if (r[n - 1] != 's')
     {
        ops++;
        r[n - 1] ='s';
     }
     for (int i = 1; i < n - 1; ++i)
     {
        if (r[i] == 'u')
        {
            if (r[i - 1] != 's')
            {
                ops ++;
                r[i - 1] = 's';
            }
            if (r[i + 1] != 's')
            {
                ops++;
                r[i + 1] = 's';
            }
        }
     }
      cout << ops << endl;

   }
   
}