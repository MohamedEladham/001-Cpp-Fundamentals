#include <iostream>
#include "CheckNumbersLib.h"
#include "InputLib.h"
#include "MyMathLib.h"
#include "OutputLib.h"
#include "ValidationLib.h"
using namespace std;

int main()
{
	// Coming From Input Library
	int Num = InputLib::ReadANumber("Enter A Number: ");

	// Coming From Output Library
	OutputLib::PrintIntegerNumber("You Entered: ", Num);


	// Coming From MyMath Library
	float Half = MyMathLib::CalculateHalfNumber(Num);
	OutputLib::PrintFloatNumber("Half Of Number: ", Half);


	// Coming From Check Number Library
	if (CheckNumbersLib::CheckEvenNumber(Num) == CheckNumbersLib::Even)
		cout << "Number is Even\n";
	else
		cout << "Number is Odd\n";


	// Coming From Check Number Library
	cout << "\nPerfect Numbers From 1 To " << Num << ":\n";
	for (int i = 1; i <= Num; i++)
	{
		if (CheckNumbersLib::IsPerfectNumber(i))
			cout << i << endl;
	}

	// Coming From MyMath Library
	int A = 10, B = 20;
	cout << "\nBefore Swap: A=" << A << " B=" << B << endl;
	MyMathLib::SwapTwoNumbers(A, B);
	cout << "After Swap: A=" << A << " B=" << B << endl;


	// Coming From MyMath Library
	if (MyMathLib::ValidateNumberInRange(Num, 1, 100))
		cout << "\nNumber is in range 1 - 100\n";
	else
		cout << "\nNumber is NOT in range\n";

	// Coming From Input Library
	string Name = InputLib::ReadName("\nEnter Your Name: ");
	
	// Comming From Output Library
	OutputLib::PrintName(Name);

	// Coming From Input Library
	char Ch = InputLib::ReadCharacter("Enter A Character: ");

	// Coming From Output Library
	OutputLib::PrintCharacter("Your Character: ", Ch);

	return 0;
}