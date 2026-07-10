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
       int operations = 0;
       while (n != 1)
       {
        if (n % 6 == 0)
        {
            n /= 6;
            operations++;
        }
        
        else if (n  % 3 == 0)
        {
            n *= 2;
            operations++;
        }
        else
        {
            operations = -1;
            break;
        }
       
       }
       cout << operations << endl;
    }
}
