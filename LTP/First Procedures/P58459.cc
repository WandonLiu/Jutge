#include <iostream>
using namespace std;

bool leap(int year){
    return (year % 4 == 0 and (year%100 != 0 or (year/100)%4 == 0));
}

bool is_valid_date(int day, int month, int year){
    if (day <= 0 or month <= 0 or year <= 0 or month > 12) return false;
    else if ((month == 1 or month == 3 or month == 5 or month == 7 or month == 8 or month == 10 or month == 12) and day <= 31)
        return true;
    else if (month == 2){
		if ((leap(year) and day <= 29) or (!leap(year) and day <= 28))
            return true;
		else return false;
		}
	else {
		if (day <= 30) return true;
		else return false;
	}
}