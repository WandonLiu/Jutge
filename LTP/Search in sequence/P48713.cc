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
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        cout << num << " is ";
        if (not prime(num)) cout << "not ";
        cout << "prime\n";
    }
}