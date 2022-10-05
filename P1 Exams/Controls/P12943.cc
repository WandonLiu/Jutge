#include <iostream>
using namespace std;

int main(){
	int a = 0, b = 0, c = 0;
	int n;
	cin >> n;
	char ch;
	for (int i = 0; i < n; ++i){
		cin >> ch;
		if (ch == 'a') ++a;
		if (ch == 'b') ++b;
		if (ch == 'c') ++c;
	}
	if (a >= b and a >= c) cout << "majoria de a" << endl << a << " repeticio(ns)" << endl;
	else if (b >= a and b >= c) cout << "majoria de b" << endl << b << " repeticio(ns)" << endl;
	else cout << "majoria de c" << endl << c << " repeticio(ns)" << endl;
}