#include <iostream>
using namespace std;

int main(){
    char c;
    bool a = false;
    cin >> c;
    while (c != '.' and not a) {
        a = (c == 'a');
        cin >> c;
    }
    if (a) cout << "yes\n";
    else cout << "no\n";
}