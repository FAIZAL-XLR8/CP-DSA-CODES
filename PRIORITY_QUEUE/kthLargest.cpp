#include<bits/stdc++.h>
using namespace std;
int main() {
    vector <int> arr = {10, 20, -4, 6, 18, 24, 105, 118};
    priority_queue<int, vector <int>, greater<int> > pq;
    int k = 3;
    for (int i = 0; i < arr.size(); ++i) {
        pq.push(arr[i]);
        if (pq.size() > k) pq.pop(); // this ensure that heap has only top three elements
    }

    cout << pq.top();
}