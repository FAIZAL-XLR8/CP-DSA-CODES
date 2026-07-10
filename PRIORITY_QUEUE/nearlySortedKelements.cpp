    #include <bits/stdc++.h>
    using namespace std;
        void nearlySorted(vector<int>& arr, int k) {
            //Given an array arr[], where each element is at most k away from its target position, you need to sort the array optimally.
        // code
        // vector <int> ans;
        // priority_queue<int, vector<int>, greater<int>> pq;
        // for (int i = 0; i < arr.size(); ++i) { // o(n)
        //     pq.push(arr[i]); // O(logn)
        // }
        // while (!pq.empty()) {
        //     ans.push_back(pq.top());
        //     pq.pop();
        // }
        // for (int i = 0; i < arr.size(); ++i) arr[i] = ans[i];
        // // ~O(nlogn)
      priority_queue<int, vector<int>, greater<int>> pq;
      int n = arr.size();
      for (int i = 0; i < n; ++i) {
          pq.push(arr[i]);
          if (pq.size() > k) {
              arr[i - k] = pq.top();
              pq.pop();
          }
      }
      // we have assigned n - k elements by now
      for (int i = n - k; i < n; ++i) {
          arr[i] = pq.top();
          pq.pop();
      }
    }
    int main () {
        vector <int> arr = {6, 5, 3, 2, 8, 10, 9};
        int k = 3;
        nearlySorted(arr, k);
        for (auto x : arr) cout << x <<" "; 


    }
