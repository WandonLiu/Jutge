#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(2);
    double n, sum = 0, c = 0;
    while (cin >> n) {
    	sum += n;
    	++c;
    }
    cout << sum/c << endl;
}