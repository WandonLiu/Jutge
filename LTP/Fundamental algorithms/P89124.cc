#include <iostream>
#include <vector>
using namespace std;

const int MAX = 1000001;

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

int main(){
	vector<bool> v(MAX, false);
	sieve(v);
	int x;
	while (cin >> x){
		if (v[x]) cout << x << " is prime" << endl;
		else cout << x << " is not prime" << endl;
	}
}