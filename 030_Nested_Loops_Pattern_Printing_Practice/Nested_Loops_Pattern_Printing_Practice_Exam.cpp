#include <iostream>
using namespace std;

int main()
{
	// Homework 1: Generate all combinations of uppercase and lowercase letters (ASCII pairing pattern)
	for (int i = 65; i <= 90; i++)
	{
		for (int j = 97; j <= 122; j++)
		{
			cout << char(i) << " - " << char(j) << endl;
		}
		cout << "--------------\n\n";
	}

	cout << "\n===================================\n\n";

	// Homework 2: Print inverted triangle pattern using stars (decreasing nested loop pattern)
	for (int i = 10; i >= 1; i--)
	{
		for (int j = i; j >= 1; j--)
		{
			cout << "*";
		}
		cout << "\n";
	}

	cout << "\n===================================\n\n";

	// Homework 3: Print decreasing numeric triangle (reverse counting pattern per row)
	for (int i = 10; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}

	cout << "\n===================================\n\n";

	// Homework 4: Print increasing numeric triangle (progressive nested pattern)
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}


	cout << "\n===================================\n\n";

	// Homework 5: Print incremental alphabet triangle (character pattern generation using ASCII)
	for (int i = 65; i <= 70; i++)
	{
		for (int j = 65; j <= i; j++)
		{
			cout << char(j);
		}
		cout << "\n";
	}

	return 0;
}