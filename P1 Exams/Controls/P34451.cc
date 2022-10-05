#include <iostream>
using namespace std;

int main(){
	int n, x, c = 0;
	cin >> n;
	while (cin >> x){
		if (x%n == 0) ++c;
	}
	cout << c << endl;
}