#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(4);
	int n;
	double sum = 0;
	cin >> n;
	for (int i = 1; i <= n; ++i) {
		sum += 1.0/i;
	}
	cout << sum << endl;
}