#include <iostream>
using namespace std;

int gcd(int a, int b){
	int r;
	while (b > 0) {
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}
