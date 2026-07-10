#include <bits/stdc++.h>
using namespace std;
void display (queue <int> &q) {
    for (int i = 0 ; i < q.size(); ++i) {
        int x = q.front();
        cout << x <<" ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}
int main (){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    stack<int> st;
    for (int i = 0; i < q.size(); ++i) {
     st.push(q.front());
     q.pop();
    }
    while(!st.empty()) {
        q.push(st.top());
        st.pop();

    }
    display(q);
}