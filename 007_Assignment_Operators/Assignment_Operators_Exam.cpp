#include <iostream>
using namespace std;

int main()
{
    int a;

    cout << "Enter initial value of a: ";
    cin >> a;

    cout << "\nOriginal value: " << a << endl;

    // Assignment operator =
    a = 10;
    cout << "\na = 10 => " << a << endl;

    // += operator
    a += 5;  // a = a + 5
    cout << "a += 5 => " << a << endl;

    // -= operator
    a -= 3;  // a = a - 3
    cout << "a -= 3 => " << a << endl;

    // *= operator
    a *= 2;  // a = a * 2
    cout << "a *= 2 => " << a << endl;

    // /= operator
    a /= 4;  // a = a / 4
    cout << "a /= 4 => " << a << endl;

    return 0;
}