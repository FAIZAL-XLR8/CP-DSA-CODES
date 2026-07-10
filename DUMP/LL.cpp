#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node (int val) { // default contructor
        this -> val = val;
        this -> next = NULL;
    }
};
class LinkedList {
    public :
    Node* tail;
    Node* head;
    LinkedList() {
        
    head = tail = NULL;
    }
};
int main () {
    
}