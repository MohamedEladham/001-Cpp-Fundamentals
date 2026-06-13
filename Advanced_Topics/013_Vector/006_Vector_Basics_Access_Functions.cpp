#include<iostream>
#include<vector>
using namespace std;

int main()
{
    /*
    ========================================================
    STEP 1: Create and fill vector
    ========================================================
    */
    vector<int> vNumbers;

    vNumbers.push_back(10);
    vNumbers.push_back(20);
    vNumbers.push_back(30);
    vNumbers.push_back(40);
    vNumbers.push_back(50);

    cout << "\nInitial Vector Size: " << vNumbers.size() << endl;

    /*
    ========================================================
    STEP 2: Access first, last, and specific element
    ========================================================
    */
    cout << "\nFirst Element: " << vNumbers.front() << endl;
    cout << "Last Element : " << vNumbers.back() << endl;
    cout << "Element at index 1: " << vNumbers.at(1) << endl;

    /*
    ========================================================
    STEP 3: Vector state information
    ========================================================
    */
    cout << "\nSize     : " << vNumbers.size() << endl;
    cout << "Capacity : " << vNumbers.capacity() << endl;
    cout << "Empty    : " << vNumbers.empty() << endl;

    /*
    ========================================================
    STEP 4: Clear vector (remove all elements)
    ========================================================
    */
    vNumbers.clear();

    cout << "\nAfter clear():\n";

    cout << "Size     : " << vNumbers.size() << endl;
    cout << "Capacity : " << vNumbers.capacity() << endl;
    cout << "Empty    : " << vNumbers.empty() << endl;

    /*
    ========================================================
    STEP 5: Safe access check
    ========================================================
    */
    if (!vNumbers.empty())
    {
        cout << "\nFirst Element: " << vNumbers.front() << endl;
        cout << "Last Element : " << vNumbers.back() << endl;
        cout << "Element at index 0: " << vNumbers.at(0) << endl;
    }
    else
    {
        cout << "\nCannot access elements - vector is empty\n";
    }

    return 0;
}