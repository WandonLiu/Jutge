#include <iostream>
using namespace std;

int main(){
	int n, c = 0, sum = 0;
	cin >> n;
	cout << n;
	while (n > 0){
		if (c%2 == 0) sum += n%10;
		n /= 10;
		++c;
	}
	if (sum%2 == 0) cout << " IS COOL" << endl;
	else cout << " IS NOT COOL" << endl; 
}