#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin >> n;
      vector <int>  secondMini;
      int lowestFrstMini = INT_MAX;
      for (int i = 0; i < n; ++i)
      {
        int m;
        cin >> m;
        vector<int> a(m);
        for(int i = 0; i < m; ++i) cin >>a[i];
        sort (begin (a), end(a));
        lowestFrstMini = min (lowestFrstMini, a[0]);
        secondMini.push_back(a[1]);

      }
     
      sort(secondMini.begin(), secondMini.end());
        int maxSum = 0;
        auto sum = accumulate(secondMini.begin(), secondMini.end(), 0LL);
        cout << sum - secondMini[0] + lowestFrstMini << endl;

        
    }
}
