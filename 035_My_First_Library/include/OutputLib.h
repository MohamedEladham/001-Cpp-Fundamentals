#pragma once
#include <iostream>
using namespace std;

namespace OutputLib
{
	void PrintName(string Name)
	{
		cout << "\nYour Name Is " << Name << endl;
	}

	void PrintIntegerNumber(string Message, int Number)
	{
		cout << Message << Number << endl;
	}

	void PrintFloatNumber(string Message, float Number)
	{
		cout << Message << Number << endl;
	}

	void PrintCharacter(string Message, char CharacterType)
	{
		cout << Message << CharacterType << endl;
	}
}
