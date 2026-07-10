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
        string num = to_string(n);
        int firstNum = num[0] - '0';
        int length = num.size();
        cout << 9 * (length - 1) + firstNum << endl;
    }
}