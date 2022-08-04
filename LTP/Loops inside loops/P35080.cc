#include <iostream>
using namespace std;

int main(){
	int n, c = 0;
	cin >> n;
	for(int i = 0; i < n; ++i){
		int print = 0; 
		if (c > 0) cout << endl;
		for (int j = 0; j < n; ++j){
			for (int k = 0; k < n; ++k){
				if (print == 10) print = 0;
				cout << print;
				++print;
			}
			cout << endl;
		}
		++c;
	}
}