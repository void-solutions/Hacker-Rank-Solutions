#include <iostream>
#include <string>
using namespace std;

bool claassWillBeCancel(int totalStudent, int *timings, int minStudent);

int main()
{
    int testCase = 0, studentNumber = 0, atLeastStudent = 0;
    cin >> testCase;
    bool testConclusion[testCase];

    for (int i = 0; i < testCase; i++)
    {
        cin >> studentNumber >> atLeastStudent;
        int studentTimings[studentNumber];

        for (int j = 0; j < studentNumber; j++)
            cin >> studentTimings[j];

        testConclusion[i] = claassWillBeCancel(studentNumber, studentTimings, atLeastStudent);
    }
    for (size_t i = 0; i < testCase; i++)
    {
        if (testConclusion[i] == true)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
}

bool claassWillBeCancel(int totalStudent, int *timings, int minStudent)
{
    int OnTiming = 0;

    for (int i = 0; i < totalStudent; i++)
        if (timings[i] <= 0)
            OnTiming++;

    return (OnTiming >= minStudent) ? true : false;
}