#include <sstream>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	int counter=0;
	vector<int> vec;
	stringstream ss(str);
	for (size_t i = 0; i < str.size(); i++) {
		if(str[i]==',')
		counter++;
	}
	char ch;
	int nums[counter];
	for()
	vec.push_back(a);
	vec.push_back(b);
	vec.push_back(c);
	return vec;
}


int main() {
	string str;
	cin >> str;
	vector<int> integers = parseInts(str);
	for(int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}

	return 0;
}
