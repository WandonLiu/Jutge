#include <iostream>
#include <cmath>
using namespace std;

int largest_prime_factor(int n) {
    for (int i = 2; i*i <= n; ++i)
        if (n%i==0) {
            n /= i;
            --i;
        }
    return n;
}
