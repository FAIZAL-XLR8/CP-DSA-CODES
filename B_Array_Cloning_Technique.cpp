#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n);
          unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
   cin >> a[i];
    freq[a[i]]++;
        }
      
        int maxFreq = 0;
       for (auto it = freq.begin(); it != freq.end(); ++it)
       {
       maxFreq = max(maxFreq, it -> second);
       }
       if (maxFreq == n) 
       {
        cout << 0 << endl;
        continue;
       }
       int nonMaxFreq = n - maxFreq;
       int operations = 1;
       while (nonMaxFreq > 0)
       {
        int check = nonMaxFreq -maxFreq;
                if( check > 0)
                {
                    operations += maxFreq + 1;
                    nonMaxFreq = check;
                    maxFreq *= 2;
                }
       
                else
                {
                    operations += nonMaxFreq;
                    nonMaxFreq = 0;
                }
       }
         cout << operations << endl;

    }
}
