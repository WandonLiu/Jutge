#include <iostream>
using namespace std;

bool is_perfect(int n){
    int sum = 1;
    for (int i = 2; i*i <= n; ++i){
        if (n % i == 0) sum += i + n/i;
    }
    return sum == n and n != 1;
}