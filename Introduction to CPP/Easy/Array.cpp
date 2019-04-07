#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void coutreverse(int[],int);

int main() {
    int x;
	cin >>x;
	int arr[x];
	for (size_t i = 0; i < x; i++) {
		cin >>arr[i];
	}
	coutreverse(arr,x);
}

void coutreverse(int ex[],int size){
	for (size_t i = size ; i > 0; i--) {
		cout <<ex[i-1]<<" ";
	}
}
