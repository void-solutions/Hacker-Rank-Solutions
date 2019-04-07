#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main(){
    vector <string> ser={"","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if(n=>1&&n<10)
    cout <<ser[n];
    else
    cout <<"Greater than 9";

    return 0;
}
