#include <bits/stdc++.h>
using namespace std;
void removeConsDupli(string str) {
    stack <char> st;
    st.push(str[0]);
    for (int i = 1; i < str.length(); ++i) {
        if(str[i] != st.top())
        st.push(str[i]);
    }
    string ans ="";
    while (st.size() > 0) {
        ans = st.top() + ans;
        st.pop();
    }
    cout << ans;
}
int main() {
    string str = "aaabbccddefg";
    removeConsDupli(str);
}