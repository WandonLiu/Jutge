#include <iostream>
#include <cmath>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(4);
	double z, c, sum = 0, count = 0;
	cin >> z;
	while (cin >> c) {
		sum += pow(z, count)*c;
		++count;
	}
	cout << sum << endl;
}