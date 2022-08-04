#include <iostream>
using namespace std;

int main(){
	double x;
	cin >> x;
	int aux = int(x);
	if (aux == x) cout << aux << ' ' << aux << ' ' << aux;
	else {
		cout << aux << ' ' << aux+1 << ' ';
		if (x-aux >= 0.5) cout << aux+1;
		else cout << aux;
	}
	cout << endl;
}