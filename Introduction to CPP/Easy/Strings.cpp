#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str1,str2;
	char ex;
    cin >>str1>>str2;
	cout <<str1.size()<<" "<<str2.size()<<endl;
    cout <<str1+str2<<endl;
	swap(str1[0],str2[0]);
	cout <<str1<<" "<<str2;
    return 0;
}
