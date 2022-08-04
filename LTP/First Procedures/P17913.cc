#include <iostream>
using namespace std;

int double_factorial(int x){
	int res = 1;
	while (x > 1) {
		res *= x;
		x -= 2;
	}
	return res;
}

int main(){
	int x;
	while (cin >> x){
		cout << double_factorial(x) << endl;
	}
}