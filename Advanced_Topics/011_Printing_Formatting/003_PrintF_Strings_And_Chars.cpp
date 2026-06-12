#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	char FirstName[] = "Mohammed";
	char LastName[] = "Eladham";
	char SchoolName[] = "Programming Advices";


	// Print strings using the %s specifier
	printf("Dear %s %s, How Are You?\n\n", FirstName, LastName);

	// Combine multiple strings in one formatted output
	printf("%s %s, Welcome To '%s' School\n\n", FirstName, LastName, SchoolName);


	// Character formatting examples
	char c = 'S';

	// Set minimum width for character output using %*c
	printf("Setting The Width Of C:%*c\n", 1, c);
	printf("Setting The Width Of C:%*c\n", 2, c);
	printf("Setting The Width Of C:%*c\n", 3, c);
	printf("Setting The Width Of C:%*c\n", 4, c);
	printf("Setting The Width Of C:%*c\n", 5, c);

	printf("\nString Width Examples:\n");
	printf("|%20s|\n", FirstName);
	printf("|%20s|\n", LastName);
	printf("|%20s|\n", SchoolName);


	printf("\nLeft Alignment Examples:\n");
	printf("|%-20s|\n", FirstName);
	printf("|%-20s|\n", LastName);
	printf("|%-20s|\n", SchoolName);

	printf("\nStudent Information\n");
	printf("-------------------------------\n");
	printf("| %-15s | %-5s |\n", "Name", "Age");
	printf("-------------------------------\n");
	printf("| %-15s | %-5d |\n", "Mohammed", 27);
	printf("| %-15s | %-5d |\n", "Ali", 22);
	printf("| %-15s | %-5d |\n", "Ahmed", 25);
	printf("-------------------------------\n");

	return 0;
}
