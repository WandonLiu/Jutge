#include <iostream>
using namespace std;

int sum_of_digits(int x){
	if (x < 10) return x;
	return x%10+sum_of_digits(x/10);
}

int reduction_of_digits(int x){
	int n = sum_of_digits(x);
	if (n < 10) return n;
	return reduction_of_digits(n);
}