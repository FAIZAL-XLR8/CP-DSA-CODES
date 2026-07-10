#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    // constructor for creating a Nodde
    Node (int val) {
        this -> val = val;
        this -> next = NULL;
    }
};
class LinkedList {
    public :
    Node * head;
   // Node* tail;
    int size;
    LinkedList () { // default const
        //head = tail = NULL;
        head = NULL;
        size = 0;
    }
    void insertAtBeginning(int val) {
        Node* temp = new Node (val);
        if (size > 0)
        {
                temp -> next = head;
                head = temp;
        }
        else 
        {
            //head = tail = temp;
            head = temp;
        }
        size ++;
    }
    void insertAtEnd (int val) {
        Node* temp = new Node(val);
        Node* t = head;
        if (size > 0) {
            while (t-> next != NULL) {
                t = t -> next;
            }
            t->next = temp;
            // tail -> next = temp;
            // tail = temp;
        }
        else {
            head = temp;
           // head = tail = temp;
        }
        size ++;
    }
    void display () {
        Node* temp = head;
        while (temp -> next != NULL) {
            cout << temp -> val <<" -> ";
            temp = temp -> next;
        }
        cout << "NULL" << endl;
    }
    void insert (int idx, int val) {
        Node* temp = head;
        Node* newNode  = new Node (val);
        if (idx < 0 || idx > size) {
            cout << "Invalid Idx " <<  endl;
            return;
        }
        else if (idx == 0) return insertAtBeginning(val);
        else if (idx == size) return insertAtEnd(val);
        else {
        for (int i = 0; i < idx - 1; ++ i) temp = temp-> next;
        newNode -> next = temp -> next;
        temp -> next = newNode;
        size ++;  
              }
    }
    void getElement (int idx) {
        if (idx < 0 || idx >= size) cout  << "Invalid Idx" << endl;
        else if (idx == 0) cout << head -> val;
        else if (idx == size - 1) 
        {
            Node* temp = head;
            while (temp -> next != NULL){
                cout << temp -> val <<" -> ";
            }
            cout << endl;
        }//cout << tail -> val;
        else {
        Node* temp = head;
       for (int i = 0; i < idx; ++i) {
        temp = temp -> next;
              }
              cout << temp -> val;
            }
        }
    void deleteAtHead() {
        head = head -> next;
        size--;
    }
    void deleteAtTail () {
        Node* temp = head;
        Node* t = head;
        while (t -> next != NULL) {
            t = t -> next;
        }
        while (temp -> next != t) {
            temp = temp -> next;
        }
        // while (temp -> next != tail) {
        //     temp = temp -> next;
        // }
        temp -> next = NULL;
       
        //tail = temp;
        size--;
    }
    void deleteAtIdx (int idx) {
        if (idx == 0) return deleteAtHead();
        else if (idx == size - 1) return deleteAtTail ();
        else {
        Node* temp = head;
        for (int i = 0; i < idx - 1; ++ i) temp = temp-> next;
        temp -> next = temp -> next -> next;
        size--;
        }
    }
};
int main () {
    LinkedList ll;
    ll.insertAtBeginning (100);
    ll.insertAtEnd (1000);
    ll.insertAtEnd (10000);
    ll.display ();
    ll.insertAtBeginning (000);
    ll.display ();
    ll.insert (1, 10);
    ll.display ();
    ll.getElement(3);
    ll.getElement(9);
    ll.deleteAtTail();
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();

}