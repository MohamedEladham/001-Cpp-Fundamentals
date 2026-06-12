#pragma once
#include <iostream>
using namespace std;

namespace MyMathLib
{
	float CalculateHalfNumber(int Number)
	{
		return (float)Number / 2;
	}

	bool CheckIfPassedGrade(float Grade)
	{
		return (Grade >= 50);
	}

	void SwapTwoNumbers(int& Num1, int& Num2)
	{
		int Temp = Num1;
		Num1 = Num2;
		Num2 = Temp;
	}

	bool ValidateNumberInRange(int Number, int From, int To)
	{
		return (Number >= From && Number <= To);
	}
}