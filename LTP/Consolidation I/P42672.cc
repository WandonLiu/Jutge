#include <iostream>
using namespace std;

void dec_to_bin(int a, int b){
    if (a == 0 or a == 1) cout << a << b;
    else {
        dec_to_bin(a/2, b/2);
        cout << a%2 << b%2;
    }
}

int main(){
    int a, b;
    while (cin >> a >> b){
        dec_to_bin(a, b);
        cout << endl;
    }
}