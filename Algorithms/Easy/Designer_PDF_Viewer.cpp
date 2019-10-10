#include <iostream>
#include <string>
using namespace std;

int gettingHeight(int *latterSize, string usrInput);

int main()
{
    //Implementations
    int letterSize[26];
    string usrInput = "";
    //Getting size of the letters
    for (int i = 0; i < 26; i++)
        cin >> letterSize[i];
    //Getting string
    cin >> usrInput;
    cout << usrInput.length() * gettingHeight(letterSize, usrInput);
}

int gettingHeight(int *latterSize, string usrInput)
{
    int maxHeight = 0;
    for (int i = 0; i < usrInput.length(); i++)
    {
        if (latterSize[usrInput[i] - 'a'] > maxHeight)
            maxHeight = latterSize[usrInput[i] - 'a'];
    }
    
    return maxHeight;
}