#include <bits/stdc++.h>
using namespace std;
class Student{
    public : 
    string name;
    int grade;
    int* gpa; // --> this stores the pointer to an int type memory address
    Student(string name, int grade, int gpa_ptr_val)
    {
        this -> name = name;
        this -> gpa = new int (gpa_ptr_val);
        this -> grade = grade;
        cout << "constructor of " <<" "<< this->name << " was called" << "with gpa val" << *gpa<< endl;

    }
    //copy constructor
    Student (const Student &srcobj)
    {
        this -> name = srcobj.name;
        this -> grade = srcobj.grade;
        this -> gpa = srcobj.gpa;
        cout << " copy contstructor of " << this -> name <<" was called" << endl;
    }
    ~Student()
    {
        cout << "destructor of " << this -> name <<" " << "was called" << endl;
        delete this -> gpa;

    }

};
int main()
{
    //Dynamic allocation  --> heap memory me --> object stays on memory unless deleted manually
    Student* A = new Student ("Aman", 10, 10); //by default c++ private ho jata hence this wud hv gvn error if no public mentioned
        Student*  B = A; // --> this is not copy constructor thung its just a copy of pointer
       // delete B; ///delete A same thing --> if no delete statement then no destructor will be called and pointer B will not exist but object as a whole exists in heap
        //thus memory leak


        //static allocation --->stack me --> object lives untill function lives
        Student C = Student ("ALi", 12, 12); //-->object created at stack
        Student D = C; //--> here copy constructor is called
        D.name = "gandu";
        cout << *(C.gpa) << *(D.gpa) << endl << C.gpa<< endl << D.gpa;
    return 0;
}