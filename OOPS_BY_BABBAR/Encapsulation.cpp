// encapsulation is like --> all the data members and methods are combined into a single unit called class --> encapsulated
// functions of encapsultion is --> data hiding showing only what is necessary and hiding what is must
// in this way it provides asecurity level such that not even its own instamces/objects cant access those data
//it hides the implementation of code within the class and proivdees only dikhane wala chz to outside world --> like we dont know the internal implmentation of functions but .GetFunc() will call the function but we dont know how this func is implmented
// onemore thing to ntice here is that one func is not aware of another functions details still they can communicate with each other and provides security then cant directly acess if it falls under private
#include <iostream>
class Student{
    public :
    int id;
    std :: string name;
    int roll;
    private :
    int* gpa;
    std :: string gf;
    public :
    //kepp all the constructors as public
    Student (int id, int roll, int gpa, std :: string gf, std :: string name)
    {
        this -> id = id;
        this -> roll = roll;
        this -> gpa = new int (gpa);
        this -> gf = gf;
        this -> name = name;
    }
    void setGpa(int gpa)
    {
        *(this -> gpa) = gpa;
    }
    void getGpa ()
    {
       std:: cout << *(this->gpa);
    }
    ~Student ()
    {
        delete this->gpa;
    }
};
int main ()
{
    Student A   (10, 10, 10, "none", "Faizal");

}