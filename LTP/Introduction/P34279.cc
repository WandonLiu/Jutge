#include <iostream>
using namespace std;

int main(){
	int h, min, s;
	cin >> h >> min >> s;
	++s;
	min += s/60;
	s %= 60;
	h += min/60;
	min %= 60;
	if (h == 24) h = 0;
	if (h < 10) cout << '0' << h;
	else cout << h;
	cout << ':';
	if (min < 10) cout << '0' << min;
	else cout << min;
	cout << ':';
	if (s < 10) cout << '0' << s;
	else cout << s;
	cout << endl;
}