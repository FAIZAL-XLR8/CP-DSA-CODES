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
       cin >> n ;
       if ( n == 2) {
        cout << "NO" << endl;
        continue;
       }
       if (n % 2 == 1)
       {
           cout << "YES" << endl;
           continue;
       }
       string ans = "NO";
        if ( (n & (n - 1)) != 0)
        {
            ans = "YES";
        }

   
       cout << ans << endl;
       
    }

}
