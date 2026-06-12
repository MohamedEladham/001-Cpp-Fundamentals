#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// Declare and initialize a vector with predefined values.
	vector<int> vNumbers = { 10, 20, 30, 40, 50 };

	// Iterate through all vector elements using a range-based for loop.
	cout << "\n\nPrint vector elements: \n";
	for (int Number : vNumbers)
	{
		cout << Number << " ";
	}

	// Display the total number of elements stored in the vector.
	cout << "\n\nPrint the total number of elements: \n";
	cout << vNumbers.size();

	return 0;
}