#include <iostream>
using namespace std;

int main(){
    bool closed = true;
    int op = 0, cl = 0;
    char c;
    while (closed and cin >> c){
        if (c == '(') ++op;
        else if (c == ')') ++cl;
        if (cl > op) closed = false;
    }
    if (cl == op and closed) cout << "yes\n";
    else cout << "no\n";
}