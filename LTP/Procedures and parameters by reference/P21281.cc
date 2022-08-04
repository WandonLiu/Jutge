#include <iostream>
using namespace std;

void factor(int n, int& f, int& q){
    int i = 2;
    q = 0;
    while (i*i <= n){
        int max = 0;
        while (n % i == 0){
            ++max;
            n /= i;
        }
        if (max > q) {
            f = i;
            q = max;
        }
        ++i;
    }
    if (q == 0) {
        q = 1;
        f = n;
    }
}

