#include <iostream>
using namespace std;

void print_bars(int n){
    if (n > 1) {
        print_bars(n-1);
        for (int i = 0; i < n; ++i) cout << '*';
        cout << endl;
        print_bars(n-1);
    } 
    else cout << '*' << endl;
}

int main(){
    int n;
    cin >> n;
    print_bars(n);
}