#include <iostream>
using namespace std;

int main(){
    int n, pos, i = 1;
    bool found = false;
    cin >> pos;
    while (not found and cin >> n){
        if (pos == i) found = true;
        ++i;
    }
    if (found) cout << "At the position " << pos << " there is a(n) " << n << ".\n";
    else cout << "Incorrect position.\n";
}