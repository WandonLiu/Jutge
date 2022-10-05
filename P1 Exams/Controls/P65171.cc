#include <iostream>
using namespace std;

int main(){
	cout.setf(ios::fixed);
    cout.precision(2);
    int n;
    cin >> n;
    double suml = 0, sumr = 0;
    for (int i = 0; i < n; ++i) {
    	double x;
    	cin >> x;
    	suml += x*x;
    	sumr += x;
    }
    suml /= (n-1);
    sumr = (sumr*sumr)/(n*(n-1));
    double res = suml-sumr;
    cout << res << endl;
}