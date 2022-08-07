#include <iostream>
using namespace std;

char encoded(char c, int k){
    if (c >= 'a' and c <= 'z') {
        return ('A' + (c+k-'a')%26);
    }
    else if (c == '_') return ' ';
    return c;
}

int main(){
    int k;
    while (cin >> k){
        char c;
        cin >> c;
        while (c != '.') {
            cout << encoded(c, k);
            cin >> c;
        }
        cout << endl;
    }
}