#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(10);
    int n;
    while (cin >> n){
        double sum = 0, div = 1;
        for (int i = 1; i <= n; ++i){
            sum += 1.0/div;
            div *= i;
        }
        cout << "With " << n << " term(s) we get " << sum << '.' << endl;
    }
}