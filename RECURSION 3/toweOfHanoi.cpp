#include<iostream>
using namespace std;
void hanoi ( int n, char a, char b, char c) {
    if (n == 0) return;
        hanoi (n-1, a, c, b);
        cout << a <<"---->" << c << endl;
        hanoi (n-1, b, a, c);
}
int main() {
    char source = 'A';
    char helper  = 'B';
    char destination = 'C';
    cout << "enter the amount of discs to be solved" <<endl;
    int n;
    cin >> n;
    hanoi (n, source, helper, destination);//follow the order
}