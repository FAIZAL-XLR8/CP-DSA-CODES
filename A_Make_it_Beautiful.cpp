#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(begin(a), end(a));
        reverse(begin(a), end(a));
        int i = 0;
        int j = n - 1;
        vector<int> ans;
        while (j >= i)
        {
            ans.push_back(a[i]);
            ans.push_back(a[j]);
            i++, j--;
        }
        if (n % 2 != 0)
            ans.pop_back();
        bool flag = false;
        for (int i = 1; i < n; ++i)
        {
            if (a[i] != a[i - 1])
                flag = true;
        }
        if (!flag)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            for (auto x : ans)
                cout << x << " ";
            cout << endl;
        }
    }
}