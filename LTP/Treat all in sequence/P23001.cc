#include <iostream>
using namespace std;

int main(){
    int c = 1, max = 1;
    string first, next;
    cin >> first;
    while (cin >> next){
        if (first == next) ++c;
        else c = 0;
        if (c > max) max = c;
    }
    cout << max << endl;
}