#include <iostream>
using namespace std;

int main(){
	int n, sum = 0;
	char coin;
	cin >> n;
	for (int i = 0; i < n; ++i){
		for (int j = 0; j < n; ++j){
			cin >> coin;
			if (i == j or j == n-i-1) sum += coin - '0';
		}
	}
	cout << sum << endl;
}