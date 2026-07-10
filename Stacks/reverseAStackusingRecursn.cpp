#include<bits/stdc++.h>
using namespace std;
void pushAtbottom(stack <int> &st, int y) {
    //base case
    if (st.size() == 0) {
        st.push(y);
        return;
    }
    int x = st.top();
    st.pop();
    pushAtbottom(st, y);
    st.push(x);
}
void reverseStack(stack<int> &st) {
    // Write your code here
    if (st.size() == 1) {
        return;
    }
    int x = st.top();
    st.pop();
    reverseStack(st); // magically reversed the entire shit
    // now have to just put the top most element at the bottom
    pushAtbottom(st, x);

    while (st.size() > 0) {
        cout << st.top() << " ";
        st.pop();
    }

}
int main() {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    reverseStack(st);
}
