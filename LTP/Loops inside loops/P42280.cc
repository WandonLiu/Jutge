#include <iostream>
using namespace std;

int main(){
	int r, c, sum = 0;
	char coin;
	cin >> r >> c;
	for (int i = 0; i < r*c; ++i){
		cin >> coin;
		sum += coin-'0';
	}
	cout << sum << endl;
}