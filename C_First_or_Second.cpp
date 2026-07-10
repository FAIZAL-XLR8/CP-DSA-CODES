#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main() {

    int t;
    cin >> t;
    while (t--)
    {
      int n;
      cin >> n;
      vector <ll> arr(n);
      deque<ll> dq;
      for (int i = 0; i <n; ++i) 
      {
        cin >> arr[i];
        dq.push_back(arr[i]);
      }
      ll sum = 0;
      while (dq.size() > 1)
      {
        ll first = dq.front();
        dq.pop_front();
        ll second = dq.front();
        dq.pop_front();
        if (first < 0 and second >= 0)
        {
            sum += first;
            dq.push_front(second);
            continue;
        }
        ll temp1 = sum + first;
        ll temp2 = sum - second;
        if (temp1 > temp2)
        {
            dq.push_front(second);
            sum = temp1;
        }
        else 
        {
            dq.push_front(first);
            sum = temp2;
        }

      }
      cout << sum << endl;
   }
   
}