#include <iostream>
using namespace std;

int roman_to_dec(char c){
    if (c == 'I') return 1;
    else if (c == 'V') return 5;
    else if (c == 'X') return 10;
    else if (c == 'L') return 50;
    else if (c == 'C') return 100;
    else if (c == 'D') return 500;
    else return 1000;
}

int main(){
    string s;
    char c, prev;
    cin >> c;
    prev = c;
    s += c;
    int res = roman_to_dec(c);
    while (cin >> c){
        if (c == '.') {
            cout << s << " = " << res << endl;
            s = "";
            res = 0;
        }
        else {
            int a, b;
            a = roman_to_dec(c);
            b = roman_to_dec(prev);
            if (a > b) res += a-2*b;
            else res += a;
        }
        if (c != '.') s += c;
        prev = c;
    }
}