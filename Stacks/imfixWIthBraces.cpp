#include <bits/stdc++.h>
using namespace std;
int solve (char op,int val1,int val2) {
    int ans = -1;
    if (op == '+') ans = val1 + val2;
    else if(op == '-') ans = val1 - val2;
    else if (op == '/') ans = val1 / val2;
    else if (op == '*') ans = val1 * val2;
    return ans;
}
int prio (char op) {
    if(op == '/' || op == '*') return 1;
    else if (op == '+' || op == '-') return 0;
    return -1;
}
int main () 
{
    string str = "(2+6)*4/8-3";
    stack <int> val;
    stack <char> op;
    int ans;
    for (int i = 0; i < str.length(); ++i) {
        if(isdigit(str[i])) val.push(str[i] - '0');
        else { // dealing with operators
            if(str[i] == '(') op.push(str[i]);
            else if (str[i] == ')') {
                // kaam
                while(!op.empty() && op.top()!= '(') {
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = op.top();
                    op.pop();
                     ans = solve (ch, val1, val2);
                     val.push(ans);
                }
                op.pop();// popped out '('
            }
            else if (op.empty() || op.top() == '(' || prio(op.top()) < prio(str[i])) op.push(str[i]);
            else { // prio of str[i] <= prio of op.top
                // kaam
                while(!op.empty() && op.top() != '('&& prio(str[i]) <= prio(op.top())) {
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
    }
    while(!op.empty())
 {
    
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