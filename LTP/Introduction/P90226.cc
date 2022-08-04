#include <iostream>
#include <string>
using namespace std;

int main(){
	string a, b;
	cin >> a >> b;
	if (a > b) cout << a << " > " << b;
	else if (a < b) cout << a << " < " << b;
	else cout << a << " = " << b;
	cout << endl;
}