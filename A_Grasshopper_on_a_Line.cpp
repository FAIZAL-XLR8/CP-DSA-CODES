#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        ;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        int j = 0;
        int maxLen = 0;
        int window = 0;
        while (j < n)
        {

            if (a[j] == 0)
            {
                window++;
                maxLen = max(maxLen, window);
            }
            else
                window = 0;
            j++;
        }
        cout << maxLen << endl;
    }
}
