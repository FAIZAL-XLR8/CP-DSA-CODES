#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int xKing, yKing;
        cin >> xKing >> yKing;
        int xQueen, yQueen;
        cin >> xQueen >> yQueen;
        set<pair<int, int>> s;

        vector<int> dx = {+a, +a, -a, -a, +b, +b, -b, -b};
        vector<int> dy = {+b, -b, +b, -b, +a, -a, +a, -a};

        for (int i = 0; i < 8; ++i)
        {
            int newX = xKing + dx[i];
            int newY = yKing + dy[i];
            s.insert({newX, newY});
        }
        int ctr = 0;
        for (int i = 0; i < 8; ++i)
        {
            int newX = xQueen + dx[i];
            int newY = yQueen + dy[i];
            if (s.find({newX, newY}) != s.end())
                ctr++;
        }
        if (a == b)
            cout << ctr / 2 << endl;
        else
            cout << ctr << endl;
    }
}