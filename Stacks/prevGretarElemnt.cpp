#include <bits/stdc++.h>
using namespace std;
int main () {
    vector <int> arr = {1, 3, 2, 0};
    stack <int> st;
    vector <int> pge(arr.size());
 for (int i = 0; i < arr.size(); ++i) {

    while (!st.empty() && st.top() <= arr[i]) st.pop();
    if(st.empty()) {
        pge[i] = -1;
    }
    else pge[i] = st.top();
    st.push(arr[i]);
 }
 for (int i = 0; i < pge.size(); ++i) {
    cout << pge[i] << " ";
 }
}