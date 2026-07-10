#include <bits/stdc++.h>
using namespace std;
class Stacks {
    public : 
    int arr[5];
    int idx = -1;
    void push(int val) {
        if (idx == sizeof(arr)/ sizeof(arr[0]) -1 ) {
            cout << "Stack is Full" << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }
    void pop() {
        if (idx == -1) {
            cout << "No element present" << endl;
            return;
        }
        idx--;
        return;
    }
    int top() {
        if (idx == -1) {
            cout << "No elements are present" << endl;
            return -1 ;
        }
       return arr[idx]; 
    }
    int size () {
        return idx + 1; 
    }
};
int main () {
Stacks st;
st.push(10);
cout << st.size();
st.pop();
cout << st.size();
cout << st.top(); 
}