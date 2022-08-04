#include <iostream>
using namespace std;

void print(int s, char c, int n){
    for (int i = 0; i < s; ++i) cout << ' ';
    for (int i = 0; i < n; ++i) cout << c;
    cout << endl;
}

