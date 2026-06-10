#include <iostream>
#include <string>
using namespace std;

struct stPersonInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

void ReadInfo(stPersonInfo& Info)
{
    cout << "Read Persons Information. \n";
    cout << "Enter First Name: ";
    cin >> Info.FirstName;
    cout << "Enter Last Name: ";
    cin >> Info.LastName;
    cout << "Enter The Age: ";
    cin >> Info.Age;
    cout << "Enter The Phone Number: ";
    cin >> Info.Phone;
    cout << "\n\n";
}

void PrintInfo(stPersonInfo Info)
{
    cout << "Person Information. \n";
    cout << "First Name: " << Info.FirstName << endl;
    cout << "Last Name: " << Info.LastName << endl;
    cout << "The Age: " << Info.Age << endl;
    cout << "The Phone Number: " << Info.Phone << endl;
    cout << "\n";
}

void ReadPersonsInformation(stPersonInfo PersonInfo[])
{
    ReadInfo(PersonInfo[0]);
    ReadInfo(PersonInfo[1]);
}

void PrintPersonsInformation(stPersonInfo PersonInfo[])
{
    PrintInfo(PersonInfo[0]);
    PrintInfo(PersonInfo[1]);
}


int main()
{
    stPersonInfo PersonInfo[2];
    ReadPersonsInformation(PersonInfo);
    PrintPersonsInformation(PersonInfo);
    return 0;
}