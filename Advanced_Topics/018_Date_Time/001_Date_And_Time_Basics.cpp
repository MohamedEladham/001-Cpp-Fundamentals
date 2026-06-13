#pragma warning(disable : 4996)

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    // Get the current system time
    time_t currentTime = time(nullptr);

    // Convert current time to a human-readable local time string
    char* localDateTime = ctime(&currentTime);

    cout << "Local Date And Time: " << localDateTime << endl;

    // Convert current time to UTC time structure
    tm* utcTime = gmtime(&currentTime);

    // Convert UTC time structure to a readable string
    char* utcDateTime = asctime(utcTime);

    cout << "UTC Date And Time: " << utcDateTime << endl;

    return 0;
}