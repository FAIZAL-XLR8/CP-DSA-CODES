#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a , b , c;
        cin  >> a >> b >> c;
        bool ans = false;
       
        //problem with a
        if ( (2 * b - c) % a == 0 and (2 * b - c) / a > 0) 
        ans = true;;
        //problem with b
        if ( (a + c) % (2 * b) == 0 and (a + c) / (2 * b) > 0)
        ans = true;
        //problem with c
        if ( (2 * b - a) % c == 0 and (2 * b - a) / c > 0)
        ans = true;
        cout  << (ans ? "YES" : "NO")  << endl;
    }
}
