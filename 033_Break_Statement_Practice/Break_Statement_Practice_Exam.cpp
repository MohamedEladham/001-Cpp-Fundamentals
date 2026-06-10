#include <iostream>
using namespace std;

int main()
{
    int Choice;

    while (true)
    {
        cout << "\n1. Start\n2. Settings\n3. Exit\n";
        cout << "Enter your choice: ";
        cin >> Choice;

        if (Choice == 3)
        {
            cout << "Exiting program...\n";
            break; // exit loop
        }

        cout << "You selected option " << Choice << endl;
    }

    return 0;
}