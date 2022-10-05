#include <iostream>
using namespace std;

const double ex = 1.6093;

int main(){
	cout.setf(ios::fixed);
    cout.precision(2);
	double x;
	string s;
	cin >> x >> s;
	if (s == "milles"){
		x *= ex;
		cout << x << " quilometres" << endl;
	}
	else {
		x /= ex;
		cout << x << " milles" << endl;
	}
}