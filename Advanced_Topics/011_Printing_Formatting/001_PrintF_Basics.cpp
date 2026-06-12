#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	short Age = 27;

	// Print My Age
	printf("My Age Is %d\n", Age);


	int Page = 1, TotalPages = 10;

	// Print integer values using %d
	printf("The Page Number = %d\n", Page);
	printf("The Number Is: %d\n", 55);

	// Print multiple integer values in one statement
	printf("You Are In Page %d Of %d\n", Page, TotalPages);

	// Format width with leading zeros
	// %0*d => width is supplied as an argument
	printf("The Page Number = %0*d\n", 2, Page); // 01
	printf("The Page Number = %0*d\n", 3, Page); // 001
	printf("The Page Number = %0*d\n", 4, Page); // 0001
	printf("The Page Number = %0*d\n", 5, Page); // 00001

	
	int Number1 = 20, Number2 = 30;

	// Use format specifiers inside expressions
	printf("The Result Of %d + %d = %d\n",
		Number1, Number2, Number1 + Number2);

	// Integer division example
	printf("The Result Of %d / %d = %d\n",
		Number2, Number1, Number2 / Number1);

	return 0;
}