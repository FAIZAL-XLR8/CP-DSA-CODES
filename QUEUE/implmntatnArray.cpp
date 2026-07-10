#include <bits/stdc++.h>
using namespace std;
class Queue {
    public :
   int front, back;
    //int arr[5]; // since size is fixed we cant use it if we dnt knw the size of the array priorly
    vector<int> arr;
    Queue (int val) { //  to avoid that we will use a default constructor and a vector to tackle the size issue
         front = 0;
        back = 0;
        //vector<int> v(val);
        //arr = v;
        arr.resize(val);
    }
    void push (int val) {
       // if(size() == 5) {
       if(back == arr.size()){
            cout << " Queue is Full" << endl;
            return; 
        }
            arr[back] = val; // we will store the value where back is pointing at
        
        back++; // back will always move aage
    }
    void pop() {
        if (back == 0) // means no element presnt in the array r
        {
            cout << "EMPTY ARRAY" << endl;
            return;
        }
        else {
            front ++; // aage wala element popped
        }
    }
    int size () {
        return (back - front);
    }
    int frontEle() { 
        if (back == 0) {
            cout << "empty" << endl;
            return -1;
        }
        else {
            return arr[front];
        }
    }
    int backEle () {
        if (back == 0) {
            cout << "empty" << endl;
            return - 1;
        }
        else {
            return arr[back - 1]; // qki back will always point at the index next to previously filled element if back is not pointing to 0
        }
    }
    void display() {
for (int i = front; i < back; ++i) cout << arr[i] << " ";
cout << endl;
    }
};

int main (){
 //Queue q;
//  q.push(10);
//  q.push(20);
//  q.push(30);
//  q.push(40);
//  q.push(50);
//  q.push(90); // didnt push into queue
//  q.display();
 Queue q2(5);
 q2.push(10);
 q2.push(20);
 q2.push(30);
 q2.push(40);
 q2.push(50);
 q2.push(90); // didnt push into queue
 q2.display();
    
}