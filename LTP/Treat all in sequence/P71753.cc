#include <iostream>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        int max, x;
        cin >> max;
        for (int i = 1; i < n; ++i){
            cin >> x;
            if (max < x) max = x;
        }
        cout << max << endl;
    }
}