#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if (num == 0) cout << num;
	while (num > 0) {
		cout << num%2;
		num /= 2;
	}
	cout << endl;
}