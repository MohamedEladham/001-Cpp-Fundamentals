#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;

    int* ptr;

    cout << "Address of a : " << &a << endl;
    cout << "Address of b : " << &b << endl;
    cout << "Address of c : " << &c << endl;

    cout << "\n---------------------\n";

    
    // Pointer points to a.
    ptr = &a;

    cout << "ptr points to a\n";
    
    // ptr stores the address of 'a'.
    cout << "Stored Address : " << ptr << endl;
    
    // The address of ptr itself remains unchanged.
    cout << "Pointer Address: " << &ptr << endl;

    cout << "\n---------------------\n";


    
    // Reassign the pointer to store the address of variable 'b'.
    ptr = &b;
    
    cout << "ptr points to b\n";
    
    // ptr now stores the address of 'b'.
    cout << "Stored Address : " << ptr << endl;
    
    // The address of ptr itself is still unchanged.
    cout << "Pointer Address: " << &ptr << endl;
    
    cout << "\n---------------------\n";

    
    
    // Reassign the pointer to store the address of variable 'c'.
    ptr = &c;
    
    cout << "ptr points to c\n";
    
    // ptr now stores the address of 'c'.
    cout << "Stored Address : " << ptr << endl;
    
    // The address of ptr itself remains the same.
    cout << "Pointer Address: " << &ptr << endl;

    return 0;
}