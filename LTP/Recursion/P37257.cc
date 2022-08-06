#include <iostream>
using namespace std;

bool three_equal_consecutive_digits(int n, int b){
    if ((n/b)/b == 0) return false;
    if (n%b == (n/b)%b and n%b == (n/(b)/b)%b) return true;
    return three_equal_consecutive_digits(n/b, b); 
}
