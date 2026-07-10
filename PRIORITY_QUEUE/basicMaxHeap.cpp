#include <bits/stdc++.h>
// to include priority queue we use #include <queue>
using namespace std;

int main () {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(202); // stays at the top as its the greatest value
    pq.push(22);
    pq.push(-1);
    cout << pq.top() <<" ";
    pq.pop();
    cout << pq.top() <<" ";
    priority_queue<int, vector<int>, greater<int>> p;
    p.push(10);
    p.push(202); 
    p.push(22);
    p.push(-1);// stays at the top as its the greatest value
    cout << p.top() <<" ";

}