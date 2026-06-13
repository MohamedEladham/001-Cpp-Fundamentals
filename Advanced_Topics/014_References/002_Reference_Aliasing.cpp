#include <iostream>
using namespace std;

int main()
{
    // Original variable.
    int a = 10;

    // First reference alias.
    int& x = a;

    // Second reference alias.
    int& y = x;

    // Any modification affects the same variable.
    a = 100;
    x = 200;
    y = 300;

    cout << "a Value   : " << a << endl;
    cout << "a Address : " << &a << endl;
    cout << endl;

    cout << "x Value   : " << x << endl;
    cout << "x Address : " << &x << endl;
    cout << endl;

    cout << "y Value   : " << y << endl;
    cout << "y Address : " << &y << endl;
    cout << endl;

    return 0;
}