#include <bits/stdc++.h>
using namespace std;
int main () {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    stack <int> st2;
    stack <int> st3;
    while (st. size() > 0) {
        st2.push(st.top());
        st.pop();
    }  
    while (st2.size() > 0) {
        st3.push(st2.top());
        st2.pop();
    } 
    while (st3.size() > 0) {
        st.push(st3.top());
        st3.pop();
    }
     while (st.size() > 0) {
        cout << st.top() << " " ;
        st  .pop();
    }


}
