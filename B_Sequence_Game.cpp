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
        vector<int> b(n, 0);
        vector<int> a;

        for (int i = 0; i < n; ++i)
        {
            cin >> b[i];
        }
        a.push_back(b[0]);
        for (int i = 1; i < n; ++i)
        {
            if (b[i] >= b[i - 1])
                a.push_back(b[i]);
            else
            {
                if (b[i] - 1 == 0)
                    a.push_back(b[i]);
                else
                    a.push_back(b[i] - 1);
                a.push_back(b[i]);
            }
        }
        cout << a.size() << endl;
        for (auto &ele : a)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
}