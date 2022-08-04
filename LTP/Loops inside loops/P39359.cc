#include <iostream>
using namespace std;

int main(){
	int n, c = 0, print = 0;
	while (cin >> n){
		if (c > 0) cout << endl;
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				if (print == 10) print = 0;
				cout << print;
				++print;
			}
			cout << endl;
		}
		++c;
	}
}