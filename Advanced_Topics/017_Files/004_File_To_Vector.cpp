#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Read and print file content line by line
void PrintFileContent(const string& fileName)
{
    // Open file in read mode
    ifstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    string line;

    // Read each line from the file and print it
    while (getline(file, line))
    {
        cout << line << endl;
    }
}

// Load all file lines into a vector
void LoadFileDataToVector(const string& fileName, vector<string>& fileContent)
{
    // Open file in read mode
    ifstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    string line;

    // Read each line and store it in the vector
    while (getline(file, line))
    {
        fileContent.push_back(line);
    }
}

int main()
{
    // Container used to store file content in memory
    vector<string> fileContent;

    // Load file data into the vector
    LoadFileDataToVector("NameStudents2.txt", fileContent);

    // Access specific lines using vector indexing
    cout << fileContent.at(5) << endl;
    cout << fileContent.at(1) << endl;
    cout << fileContent.at(9) << endl;

    cout << "\n";

    // Print the entire file content
    PrintFileContent("NameStudents2.txt");

    return 0;
}