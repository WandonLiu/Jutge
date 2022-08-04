#include <iostream>
using namespace std;

int main(){
	int num;
	cin >> num;
	if (num == 0) cout << num;
	while (num > 0) {
		if (num%16 == 15) cout << 'F';
		else if (num%16 == 14) cout << 'E';
		else if (num%16 == 13) cout << 'D';
		else if (num%16 == 12) cout << 'C';
		else if (num%16 == 11) cout << 'B';
		else if (num%16 == 10) cout << 'A';
		else cout << num%16;
		num /= 16;
	}
	cout << endl;
}