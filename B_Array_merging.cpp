#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

    int t;
    cin >> t;
    while (t--)
    {

 ll n;
 cin >> n;
    vector<ll> nums(n);
   vector<ll>arr(n);
unordered_map<ll, ll> freq1, freq2;

    for (ll i = 0; i < n; ++i) 
    {
        cin >> nums[i];
        freq1[nums[i]] = 1;
        
    }
      for (ll i = 0; i < n; ++i) 
    {
        cin >> arr[i];
        freq2[arr[i]] = 1;
    }
    ll maxWindow = 0;
    
    ll l = 0, r = 0;
    ll tempWindow = 0;
    while (r < n)
    {
        while(nums[l] != nums[r] and l < r) l++;
        freq1[nums[l]] = max(freq1[nums[r]], r-l+1);
        r++;
    }
    
    l = 0, r = 0;
     while (r < n)
    {
        while(arr[l] != arr[r] and l < r) l++;
        
        freq2[arr[l]] = max(freq2[arr[r]], r-l+1);
        r++;
    }

    for (auto &p : freq1)
    {
        if (freq2.find(p.first) != freq2.end())
        {
            maxWindow = max(maxWindow, 
                freq1[p.first] + freq2[p.first]);
        }
        else maxWindow = max (maxWindow, p.second);
    }
     for (auto &p : freq2)
    {
        if (freq1.find(p.first) != freq1.end())
        {
            maxWindow = max(maxWindow, 
                freq1[p.first] + freq2[p.first]);
        }
        else maxWindow = max (maxWindow, p.second);
    }
    cout << maxWindow << endl;
}
}