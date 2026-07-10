#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        vector<ll> nums;
        pair <ll, ll> ans={0,n};
        if (k % 2 == 0) 
        {
           int lo = 0;
           int hi = n;
           while (lo < hi)
        {
            int mid = lo + (hi - lo) / 2;
            int a = mid;
            int b = n ^ a;
            if (a + b > n and b < n) 
            {
                lo = mid + 1;
                if (a + b > (ans.first + ans.second)) ans = {a, b};
            }
            else hi = mid - 1;

        }

            
          nums.push_back(ans.first);

          nums.push_back(ans.second);
          for (int i = 1; i <= k - 2; ++i)
          nums.push_back(n);

        }
        else
        {
            for (int i = 1; i <= k; ++i)
        nums.push_back(n);
        }
        

        for (auto ele : nums)
        cout << ele << " ";
        cout << endl;

       
    }
}
