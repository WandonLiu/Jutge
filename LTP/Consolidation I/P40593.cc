#include <iostream>
using namespace std;

int main(){
    int n, sum = 0, i = 1;
    while (cin >> n){
        while (sum > n) {
            --i;
            sum -= i;
        }
        while (sum < n) {
            sum += i;
            ++i;
        }
        cout << sum << endl;
    }
}