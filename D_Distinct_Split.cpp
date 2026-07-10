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
   string s;
   cin >> s;
   unordered_set<char> st;
  
   vector<int> prefix(n, 0);
   vector<int> suffix(n, 0);
       
   for (int i = 0; i < n; ++i)
   {
    char ch = s[i];
    
    prefix[i] = st.size();
    if (st.find(ch) == st.end())
    {
        st.insert(ch);
        prefix[i]++;
    }
   }
   st.clear();
  for (int i = n - 1; i>=0;--i)
  {
    char ch = s[i];
    suffix[i] = st.size();
    if (st.find(ch) == st.end())
    {
        st.insert(ch);
    }
  }
  int maxCount = 0;
  for (int i =0;i<n-1;++i)
  {
    maxCount = max(maxCount, prefix[i]+suffix[i]);
  }
  cout << maxCount << endl;
}
}