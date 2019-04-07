#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

// Complete the findDigits function below.
int findDigits(int n) {
int counter=0,divisor=0,temp=n;
for (temp; temp > 0; temp/=10) {
    // cout <<"here\n";
    // cout <<n<<"\n";
    if(n>10)
    divisor=temp%10;
    else
    divisor=temp;
    if(divisor==0)
    continue;
    if((n%divisor)==0)
    counter++;
}
return counter;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = findDigits(n);
        // cout <<result<<"\n";
        fout << result << "\n";
    }

    fout.close();

    return 0;
}
