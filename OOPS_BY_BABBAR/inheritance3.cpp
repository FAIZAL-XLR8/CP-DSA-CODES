#include <iostream>
#include <string>
using namespace std;
class Employee {
    protected :
    std :: string name;
    int emp_id;
    public :
    /*
    
    Employee (std :: dtring name, int emp_id)
    {
        tihs -> name = name;
        this -> emp_id = emp_id
    }
        this means the same as below constrictor just using initialiser list better perfrmane and is used for initilaising const data members, subojbjects, reference based member (int &x)
        */
    Employee (std :: string name, int emp_id) : name(name), emp_id (emp_id){
       std::  cout << __FUNCTION__ << std :: endl;
    } //initialisation list after :
    void display()
    {
        cout << name << " " << emp_id;

    }


};
class HR : public Employee {
    public :
    int salary;
    
    HR(string name, int emp_id, int salary) : Employee(name, emp_id), salary(salary)
    {
        cout << __FUNCTION__ << endl;
    }
};
class DirectorHR : public HR{
    public : 
    string department;
    DirectorHR(string name, int emp_id, int salary, string department) : HR (name, emp_id, salary), department(department){
        cout << __FUNCTION__ << endl;
    }

};
class MultipleInheritance : public HR, protected Employee {
    public :
    MultipleInheritance(string name, int emp_id, int salary) : HR(name,  emp_id,  salary) ,  Employee (name,  emp_id) {
        cout << __FUNCTION__ << endl;
    }
};
int main ()
{
    DirectorHR one ("faizal", 1, 1000, "cse");
    MultipleInheritance alpha ("Faizal", 11, 1000);

}