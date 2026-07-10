#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

    int t;
    cin >> t;
    while (t--)
    {

    
    ll n, k, q;
    cin >> n >> k >> q;
    vector<ll> nums(n);
   

    for (ll i = 0; i < n; ++i) 
    {
        cin >> nums[i];
        
    }
    ll count = 0;
    int l = -1, r = -1;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] <= q)
        {
            r = i;
        }else {
            r = -1, l =-1;
        }
        if (l == -1 and r != -1)
        l = r;
        if ((r != -1 )and (r - l + 1 )>= k)
        {
            count += (r - l + 1 - k 
        +1);
        
        }
       
        
    }
    cout << count << endl;
    
}
}