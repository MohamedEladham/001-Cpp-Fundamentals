#include <iostream>
using namespace std;

int main()
{
    // =========================
    // Variables
    // =========================
    int a = 10;
    int b = 20;
    int c = 30;

    // =========================
    // Reference (must be initialized)
    // =========================
    int& ref = c;

    // Reference cannot be reassigned
    // ref = b;  // This will copy value of b into c (NOT rebind)

    // =========================
    // Pointer (can be reassigned)
    // =========================
    int* ptr = nullptr;

    // =========================
    // Addresses
    // =========================
    cout << "Addresses:\n";
    cout << "a : " << &a << endl;
    cout << "b : " << &b << endl;
    cout << "c : " << &c << endl;
    cout << "ref (c) : " << &ref << endl;
    cout << "ptr : " << &ptr << endl;

    cout << "\n========================\n";

    // =========================
    // Pointer points to a
    // =========================
    ptr = &a;

    cout << "Pointer points to a\n";
    cout << "ptr value (address) : " << ptr << endl;
    cout << "*ptr value          : " << *ptr << endl;

    *ptr = 100;

    cout << "a after modification via ptr: " << a << endl;

    cout << "\n========================\n";

    // =========================
    // Pointer points to b
    // =========================
    ptr = &b;

    cout << "Pointer points to b\n";
    cout << "ptr value (address) : " << ptr << endl;
    cout << "*ptr value          : " << *ptr << endl;

    *ptr = 200;

    cout << "b after modification via ptr: " << b << endl;

    cout << "\n========================\n";

    // =========================
    // Reference behavior
    // =========================
    cout << "Reference behavior\n";
    cout << "ref value (c): " << ref << endl;
    cout << "c value      : " << c << endl;

    ref = 999;

    cout << "c after modifying ref: " << c << endl;

    return 0;
}