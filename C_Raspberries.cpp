#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> nums
        (n);
        int minOps = INT_MAX;
        int evenCount = 0;
        for (int i = 0; i < n; ++i)
        {
            cin >> nums[i];
            if (nums[i] % 2 == 0) evenCount++;
            int remainder = nums[i] % k;
            if (remainder == 0)
            {
                minOps = 0;
                
            }
          else  minOps = min( k - remainder, minOps);

        }
        if(minOps == 0) 
        {
            cout << 0 << endl;
            continue;
        }
        if(k!=4)cout << minOps << endl;
        else{
            if(evenCount >= 2)
            cout << 0 << endl;
            else if (evenCount == 1)
            cout << 1 << endl;
            else
            {
                cout << ((minOps == 1) ? 1 : 2) << endl;
            }
        }
   
        
    }
}
