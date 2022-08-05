#include <iostream>
using namespace std;

int double_factorial(int n){
	if (n <= 1) return 1; 
	return n*double_factorial(n-2);
}