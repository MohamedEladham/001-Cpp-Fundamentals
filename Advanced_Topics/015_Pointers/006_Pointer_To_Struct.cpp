#include <iostream>
using namespace std;

struct Employee
{
    string Name;
    short Age;
    float Salary;
};

int main()
{
    Employee emp;

    emp.Name = "Mohammed";
    emp.Age = 26;
    emp.Salary = 2650;

    cout << "Using Object\n";
    cout << "Name   : " << emp.Name << endl;
    cout << "Age    : " << emp.Age << endl;
    cout << "Salary : " << emp.Salary << endl;

    cout << "\n====================\n";

    // Pointer points to emp
    Employee* ptr = &emp;

    // Update emp using ptr
    ptr->Name = "Ahmed";
    ptr->Age = 20;
    ptr->Salary = 1000;

    cout << "Using Pointer\n";
    cout << "Name   : " << ptr->Name << endl;
    cout << "Age    : " << ptr->Age << endl;
    cout << "Salary : " << ptr->Salary << endl;

    cout << "\n====================\n";

    // The same address
    cout << "Struct Address by emp: " << &emp << endl;
    cout << "Struct Address by ptr: " << ptr << endl;

    return 0;
}