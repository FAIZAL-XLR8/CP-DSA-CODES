#include <bits/stdc++.h>
using namespace std;
void display (stack<int> &st) {
    if (st.size() == 1) return;
    st.pop();
    display(st);
    cout << st.top();

}
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    display(st);
}