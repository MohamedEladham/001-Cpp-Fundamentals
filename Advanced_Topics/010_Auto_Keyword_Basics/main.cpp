#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
	// auto type deduction examples

	auto a = 10;        // int
	auto b = 11.5;      // double (default for floating numbers)
	auto c = 'a';       // char
	auto d = "Mohammed"; // const char*

	string e = "Hello"; // std::string

	// Display values
	cout << "Values:\n";
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	cout << "e = " << e << endl;

	cout << "\nTypes (using typeid):\n";
	cout << "a type = " << typeid(a).name() << endl;
	cout << "b type = " << typeid(b).name() << endl;
	cout << "c type = " << typeid(c).name() << endl;
	cout << "d type = " << typeid(d).name() << endl;
	cout << "e type = " << typeid(e).name() << endl;

	cout << "\nSizes:\n";
	cout << "sizeof(a) = " << sizeof(a) << endl;
	cout << "sizeof(b) = " << sizeof(b) << endl;
	cout << "sizeof(c) = " << sizeof(c) << endl;
	cout << "sizeof(d) = " << sizeof(d) << endl;
	cout << "sizeof(e) = " << sizeof(e) << endl;

	return 0;
}