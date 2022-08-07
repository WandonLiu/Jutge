#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int max, num, sum = 0;
        cin >> max;
        sum = max;
        for (int i = 1; i < n; ++i){
            cin >> num;
            if (num > max) max = num;
            sum += num;
        }
        if (sum-max == max) cout << "YES\n";
        else cout << "NO\n";
    }
}