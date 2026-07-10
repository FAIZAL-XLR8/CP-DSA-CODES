#include <bits/stdc++.h>
using namespace std;
class Node {
    public :
    int val;
    Node* next = NULL;
    Node (int val) {
        this -> val = val;
        this -> next = NULL;
    } 
};

class LinkedList {
    public :
    Node* head;
    Node* tail;
    int size;
    // default constructor
    LinkedList () {
        head = tail = NULL;
        size = 0;
    }
    void insertAtEnd (int val) {
        Node* temp = new Node (val);
        if (size > 0){
        tail -> next = temp;
        tail = temp;
        }
        else {
                head = tail = temp; 
        }
        size++;
    }
    void display () {
        Node* temp = head;
        while (temp != NULL){
        cout << temp -> val << " -> ";
        temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
};
void inserAtEndViaHead(Node* head, int val) {
    Node* temp = new Node (val);
    while (head -> next != NULL) head = head -> next;
   head-> next = temp;
}
void display2(LinkedList* temp) {
    Node* curr = temp -> head;
    while (curr != NULL) {
        cout << curr -> val << " - > ";
        curr = curr -> next;
    }
    cout << "NULL" << endl;  
}
int main () {
    Node* a = new Node (10);
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(30);
    display2 (&ll); 
    ll.display();
    cout << ll.size << endl;
    inserAtEndViaHead(ll.head, 100);
    ll.display();
}