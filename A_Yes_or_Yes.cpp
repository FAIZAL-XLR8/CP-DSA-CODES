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
      int cntS = count (r.begin(), r.end(), 's');
      for (int i = 0; i < n / 2; ++i)
      {
        char a = r[i], b= r[n - 1 - i];
        if (a != b)
        {
            ops ++;
            cntS++;
        }
      }
      if (cntS < 2)
      {
        ops += (2 - cntS);
      }
      cout << ops << endl;
      

   }
   
}