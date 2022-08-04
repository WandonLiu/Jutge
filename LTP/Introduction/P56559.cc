#include <iostream>
using namespace std;

int main(){
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if ((a > x and b <= y) or (a >= x and b < y)) cout << 1;
	else if ((x > a and y <= b) or (x >= a and y < b)) cout << 2;
	else if (x == a and y == b) cout << '=';
	else cout << '?';
	cout << endl;
}