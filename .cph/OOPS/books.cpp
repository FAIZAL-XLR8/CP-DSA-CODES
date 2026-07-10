#include <bits/stdc++.h>
using namespace std;
class book {
    public :
 
    int price;
    string name;
    bool countBooks (int n)
 {
    return  (n > price);
 }
 bool isBookPresent (string bookname) {
    return (bookname == name);
 }
};
int main () {
book HarryPotter;
HarryPotter.name = "Potter_Series";
HarryPotter.price = 1000;
cout << HarryPotter.countBooks (999) << endl;
cout << HarryPotter.isBookPresent("Faizal");

}