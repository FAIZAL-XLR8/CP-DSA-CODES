#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, x;
        cin >> n >> k >> x;

        if (k == x and k == 1)
            cout << "NO" << endl;
        else
        {
            if (x != 1)
            {
                cout << "YES" << endl;
                cout << n << endl;
                for (int i = 0; i < n; ++i)
                    cout << 1 << " ";
                cout << endl;
            }

            else if (n % k == 0 and k != x)
            {
                int totalDigits = n / k;
                cout << "YES" << endl;
                cout << totalDigits << endl;
                for (int i = 0; i < totalDigits; ++i)
                    cout << k << " ";
                cout << endl;
            }
            else if (n % k == 1 and x == 1)
                cout << "NO" << endl;
            else
            {
                // remainder 1 nahi hai lekn 1 blocked hai

                int remainder = n % k;
                if (remainder != 1 and x == 1)
                {
                    int totalDigits = n / k;
                    cout << "YES" << endl;
                    cout << totalDigits + 1 << endl;
                    for (int i = 0; i < totalDigits; ++i)
                        cout << k << " ";
                    cout << remainder;
                    cout << endl;
                }
                else
                {
                    int totalDigits = n / k;
                    cout << "YES" << endl;
                    cout << totalDigits + (remainder) << endl;
                    for (int i = 0; i < totalDigits; ++i)
                        cout << k << " ";
                    for (int i = 0; i < remainder; ++i)
                        cout << 1 << " ";
                    cout << endl;
                }
            }
        }
    }
}