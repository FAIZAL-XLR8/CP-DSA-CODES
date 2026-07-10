#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;
        if ( n == 0)
        {
            cout << x << endl;
            continue;
        }
        ll temp = n;

            temp %= 4;

            if ( x % 2 == 0)
            {
                
            
            if ( temp == 1)
            {
                x -= (n);
            }
            else if ( temp == 2)
            {
                x += 1;
            }
           
            else if (temp == 3)
            {
                x += 1 + n;
            }
        }
        else

        {
            if ( temp == 1)
            {
                x += (n);
            }
            else if ( temp == 2)
            {
                x -= 1;
            }
           
            else if (temp == 3)
            {
                x -= (1 + n);
            }
        }
        cout << x << endl;
    }
}
