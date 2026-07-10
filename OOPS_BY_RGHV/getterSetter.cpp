#include <bits/stdc++.h>
using namespace std;
class Student {
    private:
    float marks;
    float percentage;

    public:
    int roll;
    string name;
    float  getMarks () {
        return marks;
    }
    float getPercentage() {
        return percentage;
    }
    void setMarks (float marks) {
        this -> marks = marks;
    }
    void setPercentage (float percentage) {
        this -> percentage = percentage;
    }
};
int main() {
    Student s1;
    s1.setMarks (11.8778);
    s1.setPercentage (99.99);
    cout << s1.getMarks();
}