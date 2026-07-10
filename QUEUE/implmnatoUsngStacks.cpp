#include<bits/stdc++.h>
using namespace std;
class Queue {
    public:
    stack <int> main;
    stack <int> helper;
    void addFront (int val) {
        while (!main.empty()) {
            helper.push(main.top());
            main.pop();
        }
        main.push(val);
        while (!helper.empty()) {
            main.push(helper.top());
            helper.pop();
        }
        
    }
    void addRear(int val) {
        main.push(val);
    }
    void popRear () {
    main.pop();
    }
    void popFront () {
        while (!main.empty()) {
            helper.push(main.top());
            main.pop();
        }
        helper.pop();
        while (!helper.empty()) {
            main.push(helper.top());
            helper.pop();
        }
    }
    int front () {
        while (!main.empty()) {
            helper.push(main.top());
            main.pop();
        }
        int x = helper.top();
        while (!helper.empty()) {
            main.push(helper.top());
            helper.pop();
        }
        return x;
    }
    int rear () {
        return main.top();
    }
    void push(int val) {
        main.push(val);
    }
    void display () {
        while (!main.empty()) {
            helper.push(main.top());
            main.pop();
        }
       
        while (!helper.empty()) {
            cout << helper.top() << " ";
            main.push(helper.top());
            helper.pop();
        }
        cout << endl;
    }
};
int main () {
     Queue q;
     q.push(20);
     q.push(30);
     q.push(40);
     q.push(50);
     cout << q.front() << endl;
     q.addFront(10);
     q.display();
}