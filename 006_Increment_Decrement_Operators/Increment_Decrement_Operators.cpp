#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "\nOriginal value: " << number << endl;

    // Increment operators
    cout << "\n--- Increment Operations ---\n";
    cout << "Post-increment (number++): " << number++ << endl;
    cout << "After post-increment: " << number << endl;

    cout << "Pre-increment (++number): " << ++number << endl;

    // Decrement operators
    cout << "\n--- Decrement Operations ---\n";
    cout << "Post-decrement (number--): " << number-- << endl;
    cout << "After post-decrement: " << number << endl;

    cout << "Pre-decrement (--number): " << --number << endl;

    cout << "\nFinal value: " << number << endl;

    return 0;
}