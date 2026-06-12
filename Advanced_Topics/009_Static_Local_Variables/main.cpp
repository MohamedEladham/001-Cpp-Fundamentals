#include <iostream>
using namespace std;

// Demonstrates static local variable behavior inside a function
void MyFunction()
{
	// Static variable retains its value between function calls
	static int Number = 1;

	cout << "\nValue Of Number: " << Number << endl;

	// Address stays the same across all function calls
	cout << "Number Address: " << &Number << endl;

	// Value persists and is incremented each time function is called
	Number++;
}

int main()
{
	MyFunction(); // Number = 1
	MyFunction(); // Number = 2
	MyFunction(); // Number = 3

	return 0;
}