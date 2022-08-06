#include <iostream>
using namespace std;

int operation(){
    char op;
    cin >> op;
    if (op == '*') return operation()*operation();
    else if (op == '+') return operation()+operation();
    else if (op == '-') return operation()-operation();
    return op - '0';
}

int main(){
    cout << operation() << endl;
}