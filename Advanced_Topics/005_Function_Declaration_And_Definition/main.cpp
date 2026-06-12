#include <iostream>
using namespace std;

// Function Declarition
void Sum(int, int);
void PrintName(string);

int main()
{
	Sum(20, 10);
	PrintName("Mohammed");
	return 0;
}

// Function Definition
void Sum(int A, int B)
{
	cout << A + B << endl;
}

void PrintName(string Name)
{
	cout << "\nYour Name Is: " << Name << endl;
}

