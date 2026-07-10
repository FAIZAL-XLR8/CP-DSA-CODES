#include <bits/stdc++.h>
using namespace std;
int main (){
    stack <int> st;
    cout << st.size () << endl;
    st.push(1);
    st.push(2);
    cout << st.size () << endl;
    st.pop();
    cout << st.size () << endl;
    st.push (11);
    cout << st.top() << endl;
    // printing in reverse order
    // while (st.size() > 0) {
    //     cout << st.top() << " " ;
    //     st.pop();
    // }
    // how to get the elements back after popping
    // we use another stack to stote the values of the original stack
    stack < int> st2;
    while (st. size() > 0) {
        cout << st.top () << " " ;
        st2.push(st.top());
        st.pop();
    }
    // stores the value of all the st2 members
    // in to the st stack
    while (st2.size()) {
        cout << st2.top () << " "; // prints the elements in bottom to top order 
        st.push(st2.top());
        st2.pop();
    }
    // while (st.size() > 0) {
    //     cout << st.top() << " " ;
    //     st.pop();
    // } // output = 11 1 11 1
}   