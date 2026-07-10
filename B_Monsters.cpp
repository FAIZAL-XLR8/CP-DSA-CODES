#include <bits/stdc++.h>
using namespace std;
using ll = long long;
// struct compare {
//     bool operator()(const pair<ll, ll>& a, const pair<ll, ll>& b) {
//         if (a.first != b.first) {
//             return a.first < b.first;  //  smaller value has lower priority
//         }
//         return a.second > b.second;  // jab equal hao  smaller index has higher priority
//     }
// };
class compare {
public :
bool operator()(pair<ll, ll> a, pair <ll, ll> b)
{
    if (a.first == b.first)
    return a.second > b.second;
    return a.first < b.first;
}
};


int main() {

    int t;
    cin >> t;
    while (t--)
    {

    
    ll n, k;
    cin >> n >> k ;
    vector<ll> nums(n);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, compare> pq;

    for (ll i = 0; i < n; ++i) 
    {
        cin >> nums[i];
        if (nums[i] % k == 0)
        pq.push({k, i});
        else pq.push({nums[i] % k, i});
    }
    vector<ll> ans;
    while (pq.size())
    {
        ll topVal = pq.top().first;
        ll topIdx = pq.top().second;
         pq.pop();
            ans.push_back(topIdx + 1);

    }
    for (auto ele : ans)
    cout << ele << " ";
    cout << endl;
}
    
}