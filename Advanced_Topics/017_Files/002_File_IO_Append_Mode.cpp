#include <iostream>
#include <fstream>
using namespace std;

// Function to append data to a file using append mode
void AppendDataToFile(const string& fileName)
{
    // Open file in append mode (ios::app)
    // This ensures new data is added at the end of the file
    ofstream file(fileName, ios::app);

    // Check if file was successfully opened
    if (!file.is_open())
        return; // Exit function if file cannot be opened

    // Write data to the file
    file << "Hi, Sayed\n";       // First line appended to file
    file << "Hi, Mostafa\n";     // Second line appended to file

    // Write separator line for readability
    file << "*******************************\n\n";
}

int main()
{
    AppendDataToFile("SayHello.txt");
    return 0;
}




