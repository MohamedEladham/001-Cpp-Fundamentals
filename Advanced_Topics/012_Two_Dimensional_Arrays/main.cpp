#include <iostream>
using namespace std;

int main()
{
	// 3 rows × 4 columns matrix
	int x[3][4] =
	{
		{11, 23, 53, 40},
		{51, 611, 755, 84},
		{901, 102, 113, 122}
	};

	cout << "\nPrint elements of a matrix: \n";
	// Traverse rows
	for (short i = 0; i < 3; i++)
	{
		// Traverse columns
		for (short j = 0; j < 4; j++)
		{
			cout << "x[" << i << "][" << j << "] = "
				<< x[i][j] << endl;
		}
	}

	cout << "\nCalculating the sum of elements in an matrix \n";
	int Sum = 0;

	for (short i = 0; i < 3; i++)
	{
		for (short j = 0; j < 4; j++)
		{
			Sum += x[i][j];
		}
	}
	cout << "\nSum = " << Sum << endl;

	cout << "\n\nHomeWork: \n";
	// Create a 10x10 multiplication table matrix.
	int TwoDimensionalArrays[10][10];

	// Fill each cell with the product of its row and column numbers.
	for (short i = 1; i <= 10; i++)
	{
		for (short j = 1; j <= 10; j++)
		{
			TwoDimensionalArrays[i - 1][j - 1] = i * j;
		}
	}

	cout << "\n\n";

	// Traverse and print all matrix elements.
	for (short i = 0; i < 10; i++)
	{
		for (short j = 0; j < 10; j++)
		{
			// Format numbers using leading zeros when needed.
			printf("%0*d  ", 2, TwoDimensionalArrays[i][j]);
		}
		cout << "\n";
	}

	return 0;
}