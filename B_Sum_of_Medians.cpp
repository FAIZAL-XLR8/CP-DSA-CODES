#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n, k;
       cin >> n >> k;
       vector<ll> nums(n*k);
         for (ll i = 0; i < n*k; ++i)
         {
             cin >> nums[i];
         }
         int medNo = (n + 1) / 2;
         int m = n - (medNo - 1);
         int l = 0;
            ll sum = 0;
            for (int i = nums.size() - 1; i >= 0; --i)
            {

                l++;
                if (l == m)
                {
                    sum += nums[i];
                    l = 0;
                    k--;
                }
                
                if (k == 0) break;
            }
        cout << sum << endl;

       
    }

}
