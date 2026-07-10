#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n;
       cin >> n;
       vector <ll> p(n);
         for (ll i = 0; i < n; ++i)
         {
          cin >> p[i];
         }
         vector <ll> nsi (n, -1);
         stack <ll> st;
         for (int i = n - 1; i >= 0; --i)
         {
            while (st.size() > 0 and p[i] <= p[st.top()]) st.pop();
            nsi[i] = st.empty() ? -1 : st.top();
            st.push(i);
         }
         while (st.size() > 0) st.pop();
        vector <ll> psi (n, -1);
        for (int i = 0; i< n; ++i)
        {
            while (st.size() > 0 and p[i] <= p[st.top()]) st.pop();
            psi[i] = st.empty() ? -1 : st.top();
            st.push(i);
        }
         bool flag = false;
         for (int i = 1; i < n - 1; ++i)
         {
            if (psi[i] != -1 and nsi[i] != -1 )
            {
                cout << "YES" << endl;
                cout << psi[i] + 1 << " " << i + 1 << " " << nsi[i] + 1 << endl;
                flag = true;
                break;
            }
         }
         if (!flag)
         {
            cout << "NO" << endl;
         }
    }

}
