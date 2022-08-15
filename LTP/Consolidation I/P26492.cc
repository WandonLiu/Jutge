#include <iostream>
using namespace std;

bool is_balanced(int n){
    int even = 0, odd = 0, pos = 0;
    while (n > 0) {
        if (pos % 2 == 0) even += n%10;
        else odd += n%10;
        n /= 10;
        ++pos;
    }
    return even == odd;
}

