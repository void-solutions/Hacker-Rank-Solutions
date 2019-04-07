#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size,x;
    vector<int> vec;
	cin >>size;
    for (size_t i = 0; i < size; i++) {
        cin >>x;
		vec.push_back(x);
    }
    sort(vec.begin(),vec.end());
    for(auto i=0;i<vec.size();i++)
    cout <<vec[i]<<" ";
    return 0;
}
