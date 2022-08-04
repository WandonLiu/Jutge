#include <iostream>
using namespace std;

string day_of_the_week(int d, int m, int y){
	m -= 2;
	if (m <= 0) {
		m += 12;
		y -= 1;
	}
	int c = y/100, a = y%100;
	int f = ((2.6*m) - 0.2);
	f += d + a + c/4 + a/4 - 2*c;
	f %= 7;
	if (f < 0) f += 7;
	if (f == 0) return "Sunday";
	else if (f == 1) return "Monday";
	else if (f == 2) return "Tuesday";
	else if (f == 3) return "Wednesday";
	else if (f == 4) return "Thursday";
	else if (f == 5) return "Friday";
	return "Saturday";
}
