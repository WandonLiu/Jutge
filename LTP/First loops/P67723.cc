#include <iostream>
using namespace std;

int main()
{
	int a, b, aux;
	cin >> a >> b;
	cout << "The gcd of " << a << " and " << b << " is ";
	while (b > 0){
		aux = a%b;
		a = b;
		b = aux;
	}
	cout << a << '.' << endl;
}