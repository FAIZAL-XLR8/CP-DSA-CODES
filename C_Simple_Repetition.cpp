#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long x, k;
        cin >> x >> k;
        string str1 = to_string(x);
        string str = "";
        for (int i = 0; i < k; ++i)
            str += str1;
        long long newX = stoi(str);
        if (newX % 2 == 0)
        {
            cout << "NO" << endl;
            continue;
        }
        bool flag = false;
        for (int i = 3; i * i <= newX; i += 2)
        {
            if (newX % i == 0)
            {

                flag = true;
                break;
            }
        }
        cout << (flag ? "NO" : "YES") << endl;
    }
}