#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

    int t;
    cin >> t;
    while (t--)
    {
        
        ll n;
        cin >> n;
        vector <string> str(n);
        for (int i = 0; i < n; ++i)
        cin >> str[i];

       string finalStr = "";
       finalStr += str[0];
       for (int i = 1; i < n; ++i)
       {
        string curr = str[i];
        bool flag = false;
        ll minLen = min (finalStr.length(), str[i].length());
        for (int i = 0 ; i < minLen; ++i)
        {
            char ch = finalStr[i],
            dh = curr[i];
            if (ch > dh)
            {
                finalStr = curr + finalStr;
                flag = true;
                break;
            }
            else if (ch < dh)
            {
                finalStr += curr;
                flag = true;
                break;
            }
        }
        if (!flag)
        {
            if (curr[curr.length() - 1] < finalStr[finalStr.length() - 1])
            {
                finalStr = str[i] + finalStr;
            }
            else finalStr += str[i];
        }

   }
   cout << finalStr << endl;
    }
}