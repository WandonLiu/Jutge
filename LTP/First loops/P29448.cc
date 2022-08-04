#include <iostream>
using namespace std;

bool leap(int year){
	if (year % 4 != 0 or (year % 100 == 0 and year/100 % 4 != 0)) return false;
	return true;
}

int main(){
	int day, month, year;
	while (cin >> day >> month >> year){
		if (day <= 0 or month <= 0 or year <= 0 or month > 12) cout << "Incorrect Date";
		else if ((month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) and day <= 31)
			cout << "Correct Date";
		else if (month == 2){
			if (leap(year) and day <= 29) cout << "Correct Date";
			else if (!leap(year) and day <= 28) cout << "Correct Date";
			else cout << "Incorrect Date";
		}
		else {
			if (day <= 30) cout << "Correct Date";
			else cout << "Incorrect Date";
		}
		cout << endl;
	}
}