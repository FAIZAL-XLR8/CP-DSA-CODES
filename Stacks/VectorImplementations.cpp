#include <bits/stdc++.h>
using namespace std;
class Stacks {
    public : 
   vector <int> v;
    int idx = -1;
    void push(int val) {
   v.push_back(val);
    }
    void pop() {
        if (v.size() == 0) {
            cout << "No element present" << endl;
            return;
        }
    //    v.pop_back();
       v.erase(v.end() - 1);
        return;
    }
    int top() {
        if (v.size() == 0) {
            cout << "No elements are present" << endl;
            return -1 ;
        }
       return v[v.size() - 1]; 
    }
    int size () {
        return v.size(); 
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