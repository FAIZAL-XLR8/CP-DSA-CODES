#include <bits/stdc++.h>
using namespace std;
class Node {
public :
int val;
Node* next ;
Node(int val) {
    this -> val = val;
    this -> next = NULL;
}
};
class Queue {
    public :
    Node *head, *tail;
    int size;
   Queue () {
        head = tail = NULL;
        size = 0;
    }

    void push (int val) { // inserting at tail
        Node* newNode = new Node (val);
        if(tail == NULL) {
            head = tail = newNode;
        }
        
        tail -> next = newNode;
        tail = newNode;
        size++;
    }
    void pop() { // deleting at head
        if(head == NULL) {
            cout << " Queue is empty";
            return;
        }
        Node* temp = head -> next;
        delete head;
        head = temp;
        size--;
    }
    int front() { // getting the value of head
        if(head) return head->val;
        cout << " Queue is empty" << endl;
        return -1; 

    }
    int back() {
        if(tail) return tail -> val;
        cout << "Queue is empty " << endl;
        return -1;
    }
    void display () {
        if(head == NULL) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = head;
        while(temp) {
            cout << temp -> val <<" ";
            temp = temp -> next;
        }
        cout<< endl;

    }
};

int main () {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.display();
    q.pop();
    q.display();
}