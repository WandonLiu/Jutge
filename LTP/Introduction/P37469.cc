#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int h, min;
	h = n/3600;
	n %= 3600;
	min = n/60;
	n %= 60;
	cout << h << ' ' << min << ' ' << n << endl;
}