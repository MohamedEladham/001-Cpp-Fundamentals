#include <iostream>
using namespace std;

int CheckPositiveNumberUsingDoWhile()
{
    int Number;

    do
    {
        cout << "\n\n> Please Enter A Positive Number: ";
        cin >> Number;

        if (Number <= 0)
            cout << "> The Number Is Not Positive, Please Try Again.\n";

    } while (Number <= 0);

    return Number;
}

int ReadNumberInRangeUsingDoWhile(int From, int To)
{
    int Number;

    do
    {
        cout << "\n\n> Please Enter A Number Between " << From << " And " << To << ": ";
        cin >> Number;

        if (Number < From || Number > To)
        {
            cout << "> Invalid Number, Please Try Again.\n";
        }

    } while (Number < From || Number > To);

    return Number;
}

int main()
{
    cout << "\n> The Positive Number: "
        << CheckPositiveNumberUsingDoWhile() << endl;

    cout << "\n> The Number Is Valid: "
        << ReadNumberInRangeUsingDoWhile(-5, 5) << endl;

    return 0;
}