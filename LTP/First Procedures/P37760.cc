#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(6);
	double deg;
	while (cin >> deg){
		deg = deg*M_PI/180;
		cout << sin(deg) << ' ' << cos(deg) << endl;
	}
}