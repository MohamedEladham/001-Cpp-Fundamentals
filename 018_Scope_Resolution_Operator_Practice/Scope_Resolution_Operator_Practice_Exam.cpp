#include <iostream>
using namespace std;

// Global Variables
int x = 400, y = 350;

void MyFunction()
{
    // Local Variable
    int x = 500;

    cout << "This IS My Function " << x << endl;
    cout << "This IS My Function " << ::x << endl;
    ::x = 700;
    cout << "Update X In My Function " << ::x << endl;
    ::y = 1000;
    cout << " Y is My Function " << ::y << endl;

}

int main()
{
    // Local Variable
    int x = 50;

    cout << "This IS Main Function " << x << endl;
    ::y = 1050;
    cout << "Y Is Main Function " << ::y << endl;
    MyFunction();
    ::x = 950;
    cout << "Update X In Main Function " << ::x << endl;

    return 0;
}