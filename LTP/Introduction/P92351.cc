#include <iostream>
using namespace std;

int main(){
	int a, b;
	cin >> a >> b;
	if (a < 0 and a%b != 0) cout << (a/b)-1 << ' ' << a - ((a/b)-1)*b << endl;		
	else cout << a/b << ' ' << a%b << endl;
}