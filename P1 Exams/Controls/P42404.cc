#include <iostream>
using namespace std;

const double ex = 1.254;

int main(){
	cout.setf(ios::fixed);
    cout.precision(2);
    double x;
    string s;
    cin >> x >> s;
    if (s == "euros"){
    	x *= ex;
    	cout << x << " dolars" << endl;	
    } 
	else {
	    x /= ex;
	    cout << x << " euros" << endl;
	}

}