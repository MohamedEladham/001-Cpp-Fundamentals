#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

// Create sample records inside the file
void InputDataToFile(const string& fileName)
{
    // Open file in write mode
    ofstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    // Write sample data
    file << "Mohammed\n";
    file << "Ali\n";
    file << "Amany\n";
    file << "Osama\n";
    file << "Ali\n";
    file << "Khaled\n";
    file << "Ali\n";
    file << "Eslam\n";
    file << "Osama\n";
    file << "Ali\n";
    file << "Ali\n";
    file << "Ashraf\n";
    file << "Ali\n";
}

// Load all file records into a vector
void LoadDataFromFileToVector(const string& fileName, vector<string>& fileContent)
{
    // Open file in read mode
    ifstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    string line;

    // Read file records into memory
    while (getline(file, line))
    {
        fileContent.push_back(line);
    }
}

// Save vector content back to the file
void SaveVectorToFile(const string& fileName, const vector<string>& fileContent)
{
    // Open file in write mode
    ofstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    // Write all non-empty records to the file
    for (const string& line : fileContent)
    {
        if (!line.empty())
        {
            file << line << endl;
        }
    }
}

// Update all matching records inside the file
void UpdateRecordInFile(const string& fileName,
    const string& record,
    const string& updatedValue)
{
    // Load file data into memory
    vector<string> fileContent;
    LoadDataFromFileToVector(fileName, fileContent);

    // Replace matching records
    for (string& name : fileContent)
    {
        if (name == record)
        {
            name = updatedValue;
        }
    }

    // Save updated data back to the file
    SaveVectorToFile(fileName, fileContent);
}

// Print file content to the console
void PrintFileContent(const string& fileName)
{
    // Open file in read mode
    ifstream file(fileName);

    // Verify that the file was opened successfully
    if (!file.is_open())
        return;

    string line;

    // Display file content line by line
    while (getline(file, line))
    {
        cout << line << endl;
    }
}

int main()
{
    cout << "\nPrint File Content Before Update:\n";
    PrintFileContent("MyFile.txt");

    cout << "\n";

    // Replace all occurrences of "Ali" with "Omer"
    UpdateRecordInFile("MyFile.txt", "Ali", "Omer");

    cout << "Print File Content After Update:\n";
    PrintFileContent("MyFile.txt");

    cout << "\n";

    return 0;
}