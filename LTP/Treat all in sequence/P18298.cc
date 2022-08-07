#include <iostream>
using namespace std;

void num_to_roman(int n, int op, char a, char b, char c){
    if (b == '-') {
        for (int i = 0; i < n/1000; ++i) cout << 'M';
    }
    else {
        int res = n/op;
        if (res == 9) cout << a << c;
        else if (res >= 5) {
            cout << b;
            for (int i = 0; i < res - 5; ++i) cout << a;
        }
        else if (res == 4) cout << a << b;
        else {
            for (int i = 0; i < res; ++i) cout << a;
        }
    }
}

int main(){
    int n;
    while (cin >> n) {
        cout << n << " = ";
        num_to_roman(n, 1000, 'M', '-', '-');
        n %= 1000;
        num_to_roman(n, 100, 'C', 'D', 'M');
        n %= 100;
        num_to_roman(n, 10, 'X', 'L', 'C');
        n %= 10;
        num_to_roman(n, 1, 'I', 'V', 'X');
        cout << endl;
    }
}