#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int prev, next, c = 0;
        cin >> prev;
        while (prev > 0){
            cin >> next;
            if (prev < next) ++c;
            prev = next;
        }
        cout << c << endl;
    }
}