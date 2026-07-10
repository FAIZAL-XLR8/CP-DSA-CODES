#include <bits/stdc++.h>
using namespace std;
int solve (char op,int val1,int val2) {
    int ans;
    if (op == '+')
    ans = val1 + val2;
    else if(op == '-') ans = val1 - val2;
    else if (op == '/') ans = val1 / val2;
    else if (op == '*') ans = val1 * val2;
    return ans;
}
int prio (char op) {
    if(op == '/' || op == '*') return 1;
    else if (op == '+' || op == '-') return 0;
}
int main () 
{
    string str = "2+6*4/8-3";
    stack <int> val;
    stack <char> op;
    int ans;
    for (int i = 0; i < str.length(); ++i) {
       
        if (str[i] -'0' >= 0 && str[i] - '0' <= 9) val.push(str[i] - '0');
     else {
        // operator rules
        if(op.empty() || prio(op.top()) < prio(str[i])) op.push(str[i]);
        else {
        while(!op.empty() && prio(op.top()) >= prio(str[i])) {
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            char ch = op.top();
            op.pop();
             ans = solve (ch, val1, val2);
             val.push(ans);
        }
        op.push(str[i]);
      
     
    } 
}
    // stack might not be empty
    while (!op.empty()) {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = op.top();
        op.pop();
         ans = solve (ch, val1, val2);
         val.push(ans);
    }
    cout << val.top();
    }
}