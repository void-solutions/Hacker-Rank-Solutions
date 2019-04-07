#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int nextpowerfive(int n){
    if(n>37&&n!=100){
        for (size_t i = 1; i < 5; i++) {
            if((n+i)%5==0){
                // cout <<n+i<<endl;
                return n+i;
            }
        }
    }
    return n;
}
vector<int> gradingStudents(vector<int> grades) {
    for (size_t i = 0; i < grades.size(); i++) {
            if((nextpowerfive(grades[i])-grades[i])<3 && (nextpowerfive(grades[i])-grades[i])%3!=0)
            grades[i]=nextpowerfive(grades[i]);

    }
    return grades;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<int> grades(n);

    for (int grades_itr = 0; grades_itr < n; grades_itr++) {
        int grades_item;
        cin >> grades_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        grades[grades_itr] = grades_item;
    }

    vector<int> result = gradingStudents(grades);
    cout <<"Output will be---\n";
    for (int result_itr = 0; result_itr < result.size(); result_itr++) {
        fout << result[result_itr];
        //
        cout <<result[result_itr];
        if (result_itr != result.size() - 1) {
            fout << "\n";
            //
            cout <<"\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}
