#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(3);
    double a, b;
    cin >> a >> b;
    if (b == 0) cout << "divisio per zero" << endl;
    else{
    	cout << a/b << ' ' << int(a/b) << ' ' << int(a)%int(b) << endl;
    }
}