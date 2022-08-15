#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    int a, b, k;
    while (cin >> a >> b >> k){
        double sum = 0;
        while (a <= b) {
            sum += 1.0/a;
            a += k;
        }
        cout << sum << endl;
    }
}