#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int> vec;
    int x,a,b,c,temp;
    cin >>x;
    for (size_t i = 0; i < x; i++) {
        cin >>temp;
        vec.push_back(temp);
    }
    cin >>a>>b>>c;
    vec.erase(vec.begin()+a-1);
    vec.erase(vec.begin()+b-1,vec.begin()+c-1);


    cout <<vec.size()<<endl;
    for(auto a:vec)
    cout <<a<<" ";
    return 0;
}
