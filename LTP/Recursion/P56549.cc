#include <iostream>
using namespace std;

void base_change(int n, int base){
    if (n > 0) {
        base_change(n/base, base);
        int res = n%base;
        if (res > 9){
            if (res == 10) cout << 'A';
            else if (res == 11) cout << 'B';
            else if (res == 12) cout << 'C';
            else if (res == 13) cout << 'D';
            else if (res == 14) cout << 'E';
            else cout << 'F';
        }
        else cout << res;
    }
}

int main (){
    int n;
    while (cin >> n){
        if (n == 0) cout << "0 = 0, 0, 0\n";
        else{
            cout << n << " = ";
            base_change(n, 2);
            cout << ", ";
            base_change(n, 8);
            cout << ", ";
            base_change(n, 16);
            cout << endl;
        }
    }
}