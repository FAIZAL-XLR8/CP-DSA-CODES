#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.length();
        int countZero = 0;
        int countOne = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0') countZero++;
            else countOne++;
        }
        int moves = 0;
        for (int i = 0; i < n; ++i)
        {
            if (s[i] == '0' and countOne > 0)
            {
                countOne --;
            }
            else if (s[i] == '1' and countZero > 0) countZero--;
            else
            {
                moves = n - i;
                break;
            }
        }
        cout << moves << endl;
        
    }
}
