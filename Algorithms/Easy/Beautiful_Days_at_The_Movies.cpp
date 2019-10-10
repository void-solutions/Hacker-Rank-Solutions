#include <iostream>
#include <string>
using namespace std;

int reverseIt(int);

int main()
{
    int i, j, k, total = 0;
    cin >> i >> j >> k;
    for (i; i <= j; i++)
        if ((i - reverseIt(i)) % k == 0)
            total++;
    cout << total << endl;
}

int reverseIt(int coming)
{
    int temp = 0;
    while (coming != 0)
    {
        temp += coming % 10;
        temp *= 10;
        coming /= 10;
    }
    temp /= 10;
    return temp;
}