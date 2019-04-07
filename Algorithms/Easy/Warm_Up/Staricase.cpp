#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n-i-1; j++) {
            cout <<" ";
        }
        for (size_t k = 0; k <= i; k++) {
            cout <<"#";
        }
        cout <<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
