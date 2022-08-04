#include <iostream>
using namespace std;

int gcd(int a, int b){
    int aux;
    while (b > 0){
		aux = a%b;
		a = b;
		b = aux;
	}
    return a;
}

bool read_rational(int& num, int& den){
    char c;
    cin >> num >> c >> den;
    int div = gcd(num, den);
    while (div > 1){
        num /= div;
        den /= div;
        div = gcd(num, den);
    }
    cout << num << ' ' << den << endl;
    if (den == 1) return false;
    return true;
}
