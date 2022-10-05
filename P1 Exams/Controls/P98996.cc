#include <iostream>
using namespace std;

int main(){
	char c;
	cin >> c;
	cout << c << " -> ";
	int res;
	if (c >= 'a' and c <= 'z'){
	 	res = c - 'a' + 1;
	 	cout << res << endl;
	}
	else if (c >= 'A' and c <= 'Z') {
		res = c - 'A' + 1;
		cout << res << endl;
	}
	else cout << "no es una lletra" << endl;
}