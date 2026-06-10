#include <iostream>
using namespace std;

void ReadGrades(float Grades[3])
{
    cout << "Enter Grade1: ";
    cin >> Grades[0];

    cout << "Enter Grade2: ";
    cin >> Grades[1];

    cout << "Enter Grade3: ";
    cin >> Grades[2];
}

float CalcAverage(float Grades[3])
{
    float Average;
    Average = (Grades[0] + Grades[1] + Grades[2]) / 3;
    return Average;
}

void PrintResult(float Average)
{
    cout << "The Average Of Grades Is = " << Average << endl;
}

int main()
{
    float Grades[3];

    ReadGrades(Grades);
    PrintResult(CalcAverage(Grades));

    return 0;
}