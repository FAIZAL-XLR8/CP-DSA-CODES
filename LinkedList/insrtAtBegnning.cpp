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
    Node* tail;
    int size;
    LinkedList () { // default const
        head = tail = NULL;
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
            head = tail = temp;
        }
        size ++;
    }
    void insertAtEnd (int val) {
        Node* temp = new Node(val);
        if (size > 0) {
            tail -> next = temp;
            tail = temp;
        }
        else {
            head = tail = temp;
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
};
int main () {
    LinkedList ll;
    ll.insertAtBeginning (100);
    ll.insertAtEnd (1000);
    ll.insertAtEnd (10000);
    ll.display ();
    ll.insertAtBeginning (000);
    ll.display ();
    


}