#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> arr = {1, 3, 5, 0, 1, 3, 6, 9};
    int n = arr.size();
    stack <int> st;
    vector <int> nse(n);
    for (int i = n -1; i >= 0; --i) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if (st.empty()) {
            nse[i] = -1;
      
        }
        else {
            nse[i] = st.top();
         
        }
        st.push(arr[i]);

    }
    for (int i = 0; i  <n; ++i) {
        cout << nse[i] << " ";
    }
}