#include <iostream>
using namespace std;

int operation(){
    char c;
    cin >> c;
    if (c == '('){
        int a = operation();
        char op;
        cin >> op;
        int b = operation();
        cin >> c;
        if (op == '+') return a+b;
        if (op == '-') return a-b;
        if (op == '*') return a*b;
    }
    return c-'0';
}

int main (){
    cout << operation() << endl;
}