#include <iostream>
using namespace std;

bool is_prime(int n){
	if (n < 2 or n%2 == 0) return n == 2;
	for (int i = 3; i*i <= n; i += 2){
		if (n%i == 0) return false;
	}
	return true;
}

int sum_digits(int n){
	int res = 0;
	while (n > 0){
		res += n%10;
		n /= 10;
	} 
	return res;
}

bool is_perfect_prime(int n){
	if (is_prime(n) and n > 9) {
		return is_perfect_prime(sum_digits(n));
	}
	return is_prime(n);
}


