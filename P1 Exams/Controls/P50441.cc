#include <iostream>
using namespace std;

int main(){
	string a, b, c;
	int x, y, z;
	cin >> a >> x >> b >> y >> c >> z;
	if (x <= y and x <= z) cout << a;
	else if (y <= x and y <= z) cout << b;
	else cout << c;
	cout << endl; 
}