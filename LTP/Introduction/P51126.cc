#include <iostream>
using namespace std;

int main(){
	int a, b, x, y;
	cin >> a >> b >> x >> y;
	if (b < x or a > y){ 
		cout << "[]" << endl;
		return 0;
	}	
	if (a < x) a = x;
	if (y < b) b = y;
	cout << '[' << a << ',' << b << ']' << endl;
}