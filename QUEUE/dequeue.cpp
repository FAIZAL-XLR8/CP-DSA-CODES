#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val) {
        this -> val = val;
        this -> next = NULL;
        this -> prev = NULL;
    }
};
class Dequeue {
    public :
    int size;
    Node* head;
    Node* tail;
    Dequeue () {
        size = 0;
        head = tail =  NULL;
    }
    void getFront() {
        if(head) cout<<  head->val;
        else {
            cout << "Queue is empty " << endl;
            return ;
        }
        cout << endl;
        return;
    }
   void getRear () {
        if(tail) cout <<  tail-> val;
        else {
             cout << "Queue is empty " << endl;            
           
        }
        cout << endl;
        return;
    }
    void addFront (int val) {
        Node* temp= new Node (val);
        if(head == NULL) {
            head = tail = temp;
        }
        else {
            temp -> next = head;
            head -> prev = temp;
            head = temp;
            
        }
        size++; 
    } 
    void deleteFront (){
        if (head) {
            Node* temp = head;
            head = head->next;
            if (head) head->prev = NULL;
            else tail = NULL; // List became empty
            delete temp;
         
        }
        else {
            cout << "Queue is empty" << endl;
            return;
        }
        size--;
    }
    void addRear(int val) {
        Node* temp = new Node(val);
      
        if(tail){  
        tail -> next = temp;
        temp -> prev= tail;
        tail = temp;
    }
    else {
        tail = temp;
    }
        size++;
    }
    void display (){
        Node* temp = head;
        while(temp) {
            cout << temp -> val << " -> ";
            temp = temp -> next;
        }
        cout << endl;
    }
};
int main () {
Dequeue deq;
deq.addFront(10);
deq.addRear(20);
deq.addFront(40);
deq.addRear(30);
deq.display();
deq.deleteFront();
deq.display();
deq.getRear();
deq.getFront();
deq.display();
}