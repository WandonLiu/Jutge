#include <iostream>
using namespace std;

int main(){
	int r, c, sum = 0, count = 0, white;
	char coin;
	cin >> r >> c;
	for (int i = 0; i < r; ++i) {
		if (i%2 == 0) white = 0;
		else white = 1;
		for (int j = 0; j < c; ++j) {
			cin >> coin;
			if (j%2 == white) sum += coin - '0';
		}
	}
	cout << sum << endl;
}