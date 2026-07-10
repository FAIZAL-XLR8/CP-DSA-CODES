#include <bits/stdc++.h>
using namespace std;
class Vectors {
public:
int size;
int capacity;
int* arr;
//default constructor of the array
Vectors() {
size = 0;
capacity = 1;
arr = new int [1];
}
void add (int element) {
    if (size == capacity) {
        capacity *= 2;
        int* arr2 = new int [capacity];
        for (int i = 0; i < size; ++i)
        arr2[i] = arr[i]; // copying eleements into new array
     
        arr = arr2; // address switch
    }
    arr[size ++] = element;
}
int getElement (int i) {
    if (i < size && i >= 0)
    return arr[i];
    return - 1;
}
 void printElements() {
    for (int i = 0; i < size; ++i) cout << arr[i] << " " ;
    cout << endl;
 }
};
int main () {
    Vectors v;
    v.add(10);
    v.printElements();
    cout << v.size << " " << v.capacity << endl;
    v.add(110);
    v.printElements();
    cout << v.size << " " << v.capacity << endl;
    v.add(1110);
    v.printElements();
    cout << v.size << " " << v.capacity << endl;
    v.add(111110);
    v.printElements();
    cout << v.size << " " << v.capacity << endl;

    //getting the element thru index
    cout << v.getElement(2) << endl;
    cout << v.getElement(7) << endl;
}