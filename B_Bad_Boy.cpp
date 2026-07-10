#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n, m, i, j;
       cin >> n >> m >> i >> j;
        // ek square ka 4 corners hota hmesha
        
        int firstMax = 0, secondMax = 0;
        pair<int, int> first = {}, second = {};
        if (abs(i - n) + abs(j - m) > firstMax) first = {n , m};
        else if ((abs(i- n) +abs(j -m))> second and abs(i -n) + abs(j - m) < firstMax) second = {n, m};
        if (abs(i - n) + abs(j - 1) > firstMax) first = {n , 1};
        else if ((abs(i- 1) +abs(j -m))> second and abs(i -1) + abs(j - m) < firstMax) second = {n, 1};
         if (abs(i - n) + abs(j - m) > firstMax) first = {n , m};
        else if ((abs(i- n) +abs(j -m))> second and abs(i -n) + abs(j - m) < firstMax) second = {n, m};
         if (abs(i - n) + abs(j - m) > firstMax) first = {n , m};
        else if ((abs(i- n) +abs(j -m))> second and abs(i -n) + abs(j - m) < firstMax) second = {n, m};
    }

}
