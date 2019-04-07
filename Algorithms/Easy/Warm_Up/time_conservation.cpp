#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cmath>
#include <sstream>
using namespace std;


string timeConversion(string s) {
    int hr,mn,dc;
    string status;
    char x;
    stringstream ss(s),will;
    ss >>hr>>x>>mn>>x>>dc>>status;
    if(status=="PM"||status=="pM"||status=="pm"||status=="Pm"){
        if(hr<12)
        hr+=12;
        will <<hr<<":";
        if(mn<10){
        will<<"0"<<mn<<":";}
        else
        will<<mn<<":";
        if(dc<10){
        will<<"0"<<dc;}
        else
        will<<dc;
        return will.str();
    }
    else{
        if(hr==12)
        hr=0;
        if(hr<10){
        will<<"0"<<hr<<":";}
        else
        will<<hr<<":";
        if(mn<10){
        will<<"0"<<mn<<":";}

        else
        will<<mn<<":";
        if(dc<10){
                will<<"0"<<dc;}
        else
        will<<dc;
        return will.str();
    }
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";
    cout << result <<endl;

    fout.close();

    return 0;
}
