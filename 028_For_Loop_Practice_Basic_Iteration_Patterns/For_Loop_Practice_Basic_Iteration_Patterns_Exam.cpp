#include <iostream>
using namespace std;

int main()
{
	// Print numbers from 1 to 5 (basic increment loop)
	for (int i = 1; i <= 5; i++)
	{
		cout << i << endl;
	}

	cout << "\n===========================\n";

	// Print a fixed text 5 times (simple repetition loop)
	for (int i = 1; i <= 5; i++)
	{
		cout << "Mohammed Eladham" << endl;
	}

	cout << "\n===========================\n";

	// Print text with counter value (iteration tracking inside loop)
	for (int i = 1; i <= 5; i++)
	{
		cout << "Sob7an Allah " << i << endl;
	}

	cout << "\n===========================\n";

	// Print numbers from 5 to 1 (reverse loop / countdown)
	for (int i = 5; i >= 1; i--)
	{
		cout << i << endl;
	}

	cout << "\n===========================\n";

	// Print odd numbers from 1 to 10 (step increment by 2)
	for (int i = 1; i <= 10; i = i + 2)
	{
		cout << i << endl;
	}

	cout << "\n===========================\n";

	// Print even numbers from 0 to 10 (step increment by 2 starting from 0)
	for (int i = 0; i <= 10; i = i + 2)
	{
		cout << i << endl;
	}

	return 0;
}