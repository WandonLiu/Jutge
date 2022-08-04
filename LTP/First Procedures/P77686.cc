#include <iostream>
using namespace std;

bool is_palindromic(int n){
    int aux = n, res = 0;
    while (n > 0){
        res = res*10 + n%10;
        n /= 10;
    }
    return aux == res;
}