#include <bits/stdc++.h>
using namespace std;
void helper (stack <int> &st, int idx, int val) {
    stack <int> temp;
    while (st.size() > idx) {
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while (temp.size() > 0) {
        st.push(temp.top());
        temp.pop();
    }
}
int main () {
    stack <int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    // we create another stack for rest of the elements before 
    // that idx
    stack <int> st2;
  
    while (st.size()  > 0)  {
      
        st2.push(st.top());
        st.pop(); 
    }
    st.push(70);
    while(st2.size() > 0) {
        st.push(st2.top());
        st2.pop();
    } 
    // create a function that would return the updated pushed stack
    int idx = 2;
    int val = 90;
    helper (st, idx, val);
    while (st.size() > 0) 
    {
        cout << st.top() << " ";
        st.pop();
    }

}