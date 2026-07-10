#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n, x;
       cin >> n >> x;
       vector<ll> nums(n);
       ll minBeauty = 0;
       ll maxBeauty = 0;
         for (ll i = 0; i < n; ++i)
         {
             cin >> nums[i];
             minBeauty += nums[i];
                maxBeauty += (nums[i] + x - 1) / x;
         }
         cout << (minBeauty + x - 1)/ x << " " << maxBeauty << endl;
   

       
    }

}
