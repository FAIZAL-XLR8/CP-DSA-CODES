#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ll n, k, x;
    cin >> n >> k >> x;
    vector<ll> nums(n);
    for (int i = 0; i < n; ++i) cin >> nums[i];
    sort(nums.begin(), nums.end());
    
    
    ll breakup = 1;
    vector<ll> gaps;
    
    
    for (int i = 0; i < n - 1; ++i) {
        ll diff = nums[i + 1] - nums[i];
        if (diff > x) {
            breakup++;
            gaps.push_back(diff);
        }
    }
    
    
    sort(gaps.begin(), gaps.end());
    
   
    for (ll gap : gaps) {
      
        ll need = (gap - 1) / x;
        
        if (k >= need) {
            k -= need;
            breakup--;
        } else {
            break; 
        }
    }
    
    cout << breakup << endl;
    
    
}