#include <iostream>
using namespace std;

int main(){
	int n, c = 1;
	cin >> n;
	cout << "The number of digits of " << n << " is ";
	while (n >= 10) {
		++c;
		n /= 10;
	}
	cout << c << '.' << endl;
}