#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int x1,int x2,int x3,int x4){
	int temp=0;
	if(x1>temp)
	temp=x1;
	if(x2>temp)
	temp=x2;
	if(x3>temp)
	temp=x3;
	if(x4>temp)
	temp=x4;
	return temp;
}

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
