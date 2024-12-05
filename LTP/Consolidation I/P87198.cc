#include <iostream>
#include <string>

using namespace std;

void printOctagon(int n) {
    int maxX = n+2*(n-1);
    int nX = n;
    for (int i = 0; i < n-1; ++i) {
        int spaces = (maxX-nX)/2;
        for (int space = 0; space < spaces; ++space)
            cout << ' ';
        for (int x = 0; x < nX; ++x)
            cout << 'X';
        cout << endl;
        nX += 2;
    }

    for (int i = 0; i < n; ++i) {
        for (int x = 0; x < nX; ++x)
            cout << 'X';
        cout << endl;
    }
    nX -= 2;
    for (int i = n-2; i >= 0; --i) {
        int spaces = (maxX-nX)/2;
        for (int space = 0; space < spaces; ++space)
            cout << ' ';
        for (int x = 0; x < nX; ++x)
            cout << 'X';
        cout << endl;
        nX -= 2;
    }
}

int main() {
    int n;
    while (cin >> n) {
        printOctagon(n);
        cout << endl;
    }
}