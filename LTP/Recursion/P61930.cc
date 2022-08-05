#include <iostream>
using namespace std;

int sum_of_digits(int n){
	if (n < 10) return n;
	return n%10+sum_of_digits(n/10);
}

bool is_multiple_3(int n){
	int x = sum_of_digits(n);
	if (x < 10){
		return (x == 3 or x == 6 or x == 9);
	}
	return is_multiple_3(x);
}