#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main ()
{
    int t;
    cin >> t;
    while (t--)
    {
        // gcd of two numbers max is |a-b|
        ll a, b;
        cin >> a >> b;
        ll gcdMax = abs(a - b);
        
       
        if ( gcdMax == 0) 
        {
            cout << 0 <<" "<< 0 << endl;
            continue;
        }
         ll remainder = a % gcdMax;
        ll moves = min(remainder,gcdMax - remainder);
        if (remainder == 0) moves = 0;
        cout << gcdMax << " " << moves << endl;

    }
}