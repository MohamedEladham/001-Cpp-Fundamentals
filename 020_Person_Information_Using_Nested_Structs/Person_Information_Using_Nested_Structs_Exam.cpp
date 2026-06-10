#include <iostream>
#include <string>
using namespace std;

struct stPersonName
{
    string FllName;
    string PhoneNumber;
};

struct stPersonAge
{
    short Age;
};

struct stPersonAddress
{
    string City;
    string Country;
};

struct stIncomeLevel
{
    float MonthlySalary;
    float YearlySalary = MonthlySalary * 12;
};

struct stMaritalStauts
{
    char Gender;
    string Married;
};

struct stPersonInformation
{
    stPersonName PersonName;
    stPersonAge PersonAge;
    stPersonAddress PersonAddress;
    stIncomeLevel IncomeLevel;
    stMaritalStauts MaritalStatus;
};

void ReadInfo(stPersonInformation& Info)
{
    cout << "Enter Your Name: ";
    cin.ignore(1, '\n');
    getline(cin, Info.PersonName.FllName);

    cout << "Enter The Phone Number: ";
    cin >> Info.PersonName.PhoneNumber;

    cout << "Enter Your Age: ";
    cin >> Info.PersonAge.Age;

    cout << "Enter The City: ";
    cin >> Info.PersonAddress.City;

    cout << "Enter The Country: ";
    cin >> Info.PersonAddress.Country;

    cout << "Enter Income Level: ";
    cin >> Info.IncomeLevel.MonthlySalary;

    cout << "Enter The Gender: ";
    cin >> Info.MaritalStatus.Gender;

    cout << "Are You Married: ";
    cin >> Info.MaritalStatus.Married;
}

void PrintResult(stPersonInformation Info)
{
    cout << "\n---------------------------------------\n\n";
    cout << "Name: " << Info.PersonName.FllName << "\n";
    cout << "The Phone Number: " << Info.PersonName.PhoneNumber << "\n";
    cout << "Age : " << Info.PersonAge.Age << "\n";
    cout << "City: " << Info.PersonAddress.City << "\n";
    cout << "Counter: " << Info.PersonAddress.Country << "\n";
    cout << "Monthly Salary: " << Info.IncomeLevel.MonthlySalary << "\n";
    cout << "Yearly Salary: " << Info.IncomeLevel.MonthlySalary * 12 << "\n";
    cout << "Gender: " << Info.MaritalStatus.Gender << "\n";
    cout << "Married: " << Info.MaritalStatus.Married << "\n";
    cout << "\n---------------------------------------\n\n";
}

int main()
{
    stPersonInformation PersonInformation1, PersonInformation2, PersonInformation3;
    ReadInfo(PersonInformation1);
    PrintResult(PersonInformation1);

    ReadInfo(PersonInformation2);
    PrintResult(PersonInformation2);

    ReadInfo(PersonInformation3);
    PrintResult(PersonInformation3);
    return 0;
}