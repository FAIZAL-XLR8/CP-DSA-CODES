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
        int countPos = 0;
        int countNeg = 0;
        int op = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] > 0)
                countPos++;
            else
                countNeg++;
        }
        if (n % 2 == 0)
        {
            if (countPos >= n / 2)
            {
                if (countNeg % 2 != 0)
                    op++;
            }
            else
            {
                op += (n / 2) - countPos;
                countNeg -= op;
                if (countNeg % 2 != 0)
                    op++;
            }
        }

        else
        {
            if (countPos > n / 2)
            {
                if (countNeg % 2 != 0)
                    op++;
            }
            else
            {
                op += (n / 2) + 1 - countPos;
                countNeg -= op;
                if (countNeg % 2 != 0)
                    op++;
            }
        }
        cout << op << endl;
    }
}
