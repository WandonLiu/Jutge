#include <iostream>
using namespace std;

int main(){
    int x;
    while (cin >> x){
        cout << "divisors of " << x << ':';
        int i;
        for (i = 1; i*i <= x; ++i){
            if (x%i == 0) cout << ' ' << i;
        }
        --i;
        while (i > 0) {
            if (x%i == 0 and x/i != i) cout << ' ' << x/i;
            --i;
        }
        cout << endl;
    }
}