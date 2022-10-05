#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(2);
    double e, f, g, x, y, z;
    cin >> e >> f >> g >> x >> y >> z;
    e *= x;
    e -= f;
    e *= y;
    e -= g;
    e *= z;
    cout << "Torno amb " << e << " euros." << endl;
}