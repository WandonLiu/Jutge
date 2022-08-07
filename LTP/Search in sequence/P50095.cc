#include <iostream>
using namespace std;

bool prime(int n){
    if (n < 2 or n % 2 == 0) return n == 2;
    for (int i = 3; i*i <= n; i += 2) {
        if (n%i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    while (cin >> n and prime(n)){
        if (n == 2) ++n;
        else n += 2;
        while (not prime(n)){
            n += 2;
        } 
        cout << n << endl;
    }
}