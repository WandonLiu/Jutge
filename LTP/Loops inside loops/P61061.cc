#include <iostream>
using namespace std;

int main(){
	int n, c = 0;
	while (cin >> n){
		if (n < 10) cout << "The product of the digits of " << n << " is " << n << ".\n";
		while (n > 9){
			int res = 1, aux = n;
			while (aux > 0){
				res *= aux%10;
				aux /= 10;
			}
			cout << "The product of the digits of " << n << " is " << res << ".\n";
			n = res;
		}
		cout << "----------" << endl;
	}
}