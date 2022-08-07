#include <iostream>
using namespace std;

int sum_num(int n){
    return (n*(n+1))/2;
}

int main(){
    int n;
    while (cin >> n){
        int sum = sum_num(n), aux;
        for (int i = 1; i < n; ++i) {
            cin >> aux;
            sum -= aux;
        }
        cout << sum << endl;
    }
}