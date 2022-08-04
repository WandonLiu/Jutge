#include <iostream>
using namespace std;

void sort2(int&a, int& b){
    if (a > b) {
        int aux = a;
        a = b;
        b = aux;
    }
}

void sort3(int&a, int&b, int& c){
    sort2(a, b);
    sort2(a, c);
    sort2(b, c);
}