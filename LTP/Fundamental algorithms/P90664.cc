#include <iostream>
#include <vector>
using namespace std;

const int MAX = 4000001;

bool is_prime(int n){
	for (int i = 3; i*i <= n; i += 2){
		if (n%i == 0) return false;
	} 
	return true;
}

void sieve(vector<bool>& v){
	v[2] = true;
	for (int i = 3; i < MAX; i += 2){
		v[i] = is_prime(i);
	}
}

int sum_digits(int n){
	if (n < 10) return n;
	return n%10 + sum_digits(n/10);
}

bool perfect_prime(int n, const vector<bool>& v){
	if (n < 10) return v[n];
	else if (v[n]) {
		return perfect_prime(sum_digits(n), v);
	}
	return false;
}

int main(){
	vector<bool> v(MAX, false);
	sieve(v);
	int x;
	cin >> x;
	while (x > 0){
		if (perfect_prime(x, v)) cout << "yes" << endl;
		else cout << "no" << endl;
		cin >> x;
	}
}