#include <iostream>
using namespace std;

int number_of_digits(int n){
    int res = 1;
    while (n > 9) {
        n /= 10;
        ++res;
    }
    return res;
}