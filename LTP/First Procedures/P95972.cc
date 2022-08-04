#include <iostream>
using namespace std;

int sum_divisors(int x){
    if (x == 1) return 1;
    int sum = 1;
    for (int i = 2; i*i <= x; ++i){
        if (x%i == 0) {
            if (i*i != x) sum += i + x/i;
            else sum += i;
        }
    }
    return sum + x;
}
