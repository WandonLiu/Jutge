#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i){
		int c = i;
		for (int j = 0; j < n; ++j){
			if (c%2 == 0) cout << '.';
			else cout << '*';
			++c;
		}
		cout << endl;
	}
}