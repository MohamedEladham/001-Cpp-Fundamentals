#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 15;

    int* ptr;

    ptr = &a;

    cout << "Value of a using ptr : " << *ptr << endl;   // Result => 10

    // The address stored in ptr = address of a.
    cout << "Address stored in ptr: " << ptr << endl;

    cout << "\n-------------------\n";

    *ptr = 25;

    cout << "Updated a value      : " << a << endl;      // Result => 25
    cout << "Value using ptr      : " << *ptr << endl;   // Result => 25

    cout << "\n-------------------\n";

    ptr = &b;

    cout << "Value of b using ptr : " << *ptr << endl;   // Result => 15
    
    // The address stored in ptr = address of b.
    cout << "Address stored in ptr: " << ptr << endl;

    cout << "\n-------------------\n";

    *ptr = 17;

    cout << "Updated b value      : " << b << endl;      // Result => 17
    cout << "Value using ptr      : " << *ptr << endl;   // Result => 17

    return 0;
}