#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int>  arr = {100, 80, 60, 70, 81, 60, 75, 85};
    int n = arr.size();
    vector <int> pse(n, - 1);
    stack <int> st;
    for (int i = 0; i < n; ++i) {
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }
        if(st.empty()) {
            pse[i] = -1;
            
        }
        else {
            pse[i] = st.top();
        }
        st.push(arr[i]);
    }
    for (int i = 0; i < n; ++ i){
        cout << pse[i] <<" ";
    }
}