#include <bits/stdc++.h>
using namespace std;
//queue is first in first out (FIFO) data strcture yaani pehla element ghusa toh wohi pehla element nikalta bhi hai
void display (queue <int> &q) {
    for (int i = 0; i < q.size(); ++i) {
        cout << q.front() <<" ";
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main () {
    queue<int> q; // operations such as push, front, pop can be used similar like stack 
    q.push(10);
    q.push(30);
    q.push(3330);
    q.pop(); // queue ka pehla element nikal gya --> 10 popped out
    display(q);
}