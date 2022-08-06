#include <iostream>
using namespace std;

int mod2(int n){
    n %= 2;
    if (n<0) return n+2;
    return n;
}

void print_base_n2(int n){
    int res = mod2(n);
    int div = (n-res)/(-2);
    if (div != 0) print_base_n2(div);
    cout << res;
}

int main(){
    int n;
    while (cin >> n){
        cout << n << ": ";
        print_base_n2(n);
        cout << endl;
    }
}