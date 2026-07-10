#include <bits/stdc++.h>
using namespace std;
class Node {
    public :
    int val;
    Node* next;
    Node (int val) {
        this -> val = val;
        this -> next = NULL;
    }
};
void display_recursively (Node* head) {
    
    //base case 
    if (head == NULL) {
        cout << endl;
        return;
    }
    cout << head -> val <<" ";
    display_recursively(head -> next);
}
void display(Node* head) {
     Node* temp = head;
    while (temp != NULL) {
        cout << temp -> val << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int size (Node* head) {
    int ctr = 0;
    Node* temp = head;
    while (temp != NULL) {
        ctr ++;
        temp = temp ->next;
    }
    return ctr;
}
int main () {
    Node* a = new Node(10);
    Node* b = new Node (20);
    Node* c = new Node (30);
    Node* d = new Node (40);
    a -> next = b;
    b -> next = c;
    c -> next = d;
    // Creating a temp ptr that stores a's address
    // Node* temp = a;
    // while (temp != NULL) {
    //     cout << temp -> val << " ";
    //     temp = temp -> next;
    // }
   display (a); // printing whole node thru head
   display_recursively (a);
   cout << endl;
   cout << size (a);
    cout << endl;
    cout << a->next->next->next->val << endl; // prints d's value;
}