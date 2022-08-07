#include <iostream>
using namespace std;

int num_digits(int n){
    int res = 1;
    while (n > 9){
        ++res;
        n/=10;
    }
    return res;
}

int middle_num(int n, int size){
    if (size == 1) return n;
    int num;
    for(int i = 0; i <= size/2; ++i) {
        num = n%10;
        n /= 10;
    }
    return num;
}

int main(){
    bool valid = true;
    int n, prev, curr, turn = 1;
    cin >> n >> prev;
    if (num_digits(prev)%2 == 0) valid = false;
    else prev = middle_num(prev, num_digits(prev));
    while (valid and turn+1 <= 2*n) {
        cin >> curr;
        if (num_digits(curr)%2 == 0 or prev != middle_num(curr, num_digits(curr))) valid = false;
        ++turn;
    }
    if (not valid) {
        if (turn % 2 == 0) cout << 'A' << endl;
        else cout << 'B' << endl;
    }
    else cout << '=' << endl;
}