#include<bits/stdc++.h>
using namespace std;
class Node {
    public :
    int value;
    Node* next;

    // constructor
    Node (int value) {
        this -> value = value;
        this -> next = NULL;
    }
};
int main () {
    Node a(10);
    Node b(110);
    Node c(1110);
    Node d(111110);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    a.next -> value = 30; // value of b updated to 30
    cout << (a.next) -> value << endl; // o/p = 30
    Node temp = a; //copy by value not reference
    cout << "NODES VALUES ARE" << endl;
    while (1) {
        cout << temp.value << " ";
        if (temp.next == NULL) break;
        temp = *(temp.next);
    }

}