#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Green = 2, Yellow = 3, Blue = 4 };
enum enCountryChoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egype = 5, Iraq = 6, Other = 7 };

int main()
{
    enScreenColor Color;
    cout << "Please Chose The Number Of Your Color? \n";
    cout << "(1) Red \n";
    cout << "(2) Green \n";
    cout << "(3) Yellow \n";
    cout << "(4) Blue \n";
    cout << "Chose Your Color: ";
    short num1;
    cin >> num1;
    Color = (enScreenColor)num1;

    if (Color == enScreenColor::Red)
        system("Color 4F");
    else if (Color == enScreenColor::Blue)
        system("Color 1F");
    else if (Color == enScreenColor::Green)
        system("Color 2F");
    else if (Color == enScreenColor::Yellow)
        system("Color 6F");
    else
        system("Color 4F");


    enCountryChoice Country;
    cout << "Please Enter Number Of Your Country. ";
    cout << "(1) Jordan \n";
    cout << "(2) Tunisa \n";
    cout << "(3) Algeria \n";
    cout << "(4) Oman \n";
    cout << "(5) Eygpt \n";
    cout << "(6) Iraq \n";
    cout << "(7) Other \n";

    cout << "\n---------------------------------------\n\n";

    cout << "Choice Number Of Your Country: ";
    short num2;
    cin >> num2;
    Country = (enCountryChoice)num2;

    if (Country == enCountryChoice::Jordan)
        cout << "Your Country Is Jordan \n";
    else if (Country == enCountryChoice::Tunisa)
        cout << "Your Country Is Tunisa \n";
    else if (Country == enCountryChoice::Algeria)
        cout << "Your Country Is Algeria \n";
    else if (Country == enCountryChoice::Oman)
        cout << "Your Country Is Oman \n";
    else if (Country == enCountryChoice::Egype)
        cout << "Your Country Is Egype \n";
    else if (Country == enCountryChoice::Iraq)
        cout << "Your Country Is Iraq \n";
    else
        cout << "Your Country Is Ohter \n";

    return 0;
}