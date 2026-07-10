#include <bits/stdc++.h>
using namespace std;
class Student
{
    string str;
    int *ptr;

public:
    Student(string str, int val)
    {
        this->str = str,
        ptr = new int;
        *ptr = val;
    }
    ~ Student()
    {
        cout << "Desturctor was called" << endl;
        delete ptr;
        ptr = '\0';
    }
    Student (const Student &obj)
    {
        str = obj.str;
        ptr = new int;
        *ptr = *(obj.ptr);

    }
};
int main()
{
    Student s1("ALi", 100);
    Student s2 = s1;
}