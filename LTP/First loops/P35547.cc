#include <iostream>
using namespace std;

int main(){
	int year, D, M;
	while (cin >> year){
		int k = year/100, x = year%19, b = year%4, c = year%7;
		int p = (13+8*k) / 25;
		int q = k/4;
		int y = (15-p+k-q) % 30;
		int z = (19*x + y) % 30;
		int n = (4+k-q) % 7;
		int e = (2*b + 4*c + 6*z + n) % 7;
		if (z+e <= 9){
			D = 22+z+e;
			M = 3;
		}
		else if (z == 29 and e == 6) {
			D = 19;
			M = 4;
		}
		else if (z == 28 and e == 6 and x > 10) {
			D = 18;
			M = 4;
		}
		else {
			D = z+e-9;
			M = 4;
		}
		cout << D << '/' << M << endl;
	}
}