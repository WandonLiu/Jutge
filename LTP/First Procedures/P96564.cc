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

int lcm(int a, int b){
	return (a/gcd(a, b))*b;
}

int main(){
	int num;
	while (cin >> num and num != 0){
		int a = 1;
		for (int i = 0; i < num; ++i){
			int b;
			cin >> b;
			a = lcm(a, b); 
		}
		cout << a << endl;
	}
}