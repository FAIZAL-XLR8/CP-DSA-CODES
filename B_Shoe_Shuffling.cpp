#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        // 1 2 3 4 5 6
        // 2 2 4 4 1 6
        // 1 2 2 4 4 5
        // 2 3 4 5 6 6
        //
        // 3 4 4 3 5 1 2
        // 1 2 3 3 4 4 5
        // 1 2 3 4 5 6 7
      
        vector<ll> nums(n);
        unordered_set<ll> st;
        for (ll i = 0; i < n; ++i)
        {
            cin >> nums[i];
            st.insert(i + 1);
        }
        ll maxEle = *max_element(nums.begin(), nums.end());
         ll minEle = *min_element(nums.begin(), nums.end());
        if (maxEle >= n || minEle > 1)
        {
            cout << -1 << endl;
            continue;
        }
 
        vector <ll > ans(n);
        for (ll i= 0; i < n; ++i)
        {
          
            //search for suitable person
        
            for (int j = n; j >= nums[i] and st.size(); --j)
            {
                if (st.find(j) != st.end() and j!= i + 1)
                {
                    ans[i] = j;
                    st.erase(j);
                    break;
                }
            } 
        }
        for (auto ele : ans) cout << ele <<" ";
        cout << endl;
    }
}