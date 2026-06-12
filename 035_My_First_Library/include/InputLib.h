#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace InputLib
{
	char ReadCharacter(string Message)
	{
		char Character;
		cout << Message;
		cin >> Character;
		return Character;
	}

	int ReadANumber(string Message)
	{
		int Number;
		cout << Message;
		cin >> Number;
		return Number;
	}

	string ReadName(string Message)
	{
		string Name;
		cout << Message;
		cin.ignore();
		getline(cin, Name);
		return Name;
	}

	int ReadPositiveNumber(string Message)
	{
		int Number;
		do
		{
			cout << Message;
			cin >> Number;

		} while (Number <= 0);

		return Number;
	}
}