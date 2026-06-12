#include <iostream>
using namespace std;

int main()
{
    //     128   64   32   16    8    4    2    1

    // Example 1
    // 8  = 00001000
    // 7  = 00000111
    // AND= 00000000
    cout << (1 & 7) << endl; // 0

    // Example 2
    // 12 = 00001100
    // 10 = 00001010
    // AND= 00001000
    cout << (12 & 10) << endl; // 8

    // Example 3
    // 5  = 00000101
    // 3  = 00000011
    // AND= 00000001
    cout << (5 & 3) << endl; // 1

    // Example 4
    // 15 = 00001111
    // 7  = 00000111
    // AND= 00000111
    cout << (15 & 7) << endl; // 7

    return 0;
}

