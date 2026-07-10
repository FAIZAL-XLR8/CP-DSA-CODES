 #include<bits/stdc++.h>
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
 class Stack {
    public :
    Node* head;
    int size;
  Stack () {
        size = 0;
        head = NULL;
    }
    void push(int val) {
        Node *newNode = new Node (val);
        newNode -> next = head;
        head = newNode;
        size ++;
    }
    void pop() {
        if(head) head = head -> next;
        else 
            cout << "NO ELEMENTS TO POP" << endl;
            size--;
            return;
    }
    void display () {
        Node *temp = head;
        
        while (temp) {
            cout << temp -> val << " ";
            temp = temp -> next;
          
        }
        cout << endl;
        return;
    }
   int top () {
    if (head) {
        return head ->val ;
    }
    else return -1;
       
    }
 };
 int main () {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.display();
    st.pop();
    cout << st.size;
 }