#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        if (n == k)
        {
            cout << 1 << endl;
            continue;
        }
        vector<long long> a(n);
        unordered_map<ll, ll> mp;
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        vector<long long> freq;
        for (auto ele : mp)
        {
            freq.push_back(ele.second);
        }
        sort(begin(freq), end(freq));
        for (int i = 0; i < freq.size(); ++i)
        {
            if (k <= 0)
                break;
            if (k >= freq[i])
            {
                k -= freq[i];
                freq[i] = 0;
            }
            else
            {
                freq[i] -= k;
                k = 0;
            }
        }
        int ctr = 0;
        for (auto x : freq)
        {
            if (x != 0)
                ctr++;
        }
        if (ctr == 0)
            cout << 1 << endl;
        else
            cout << ctr << endl;
    }
}