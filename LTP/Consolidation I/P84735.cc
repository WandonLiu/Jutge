#include <iostream>
using namespace std;

int main(){
    int a, b, num = 1;
    while (cin >> a >> b){
        if (a % b != 0) a = (a/b)*b + b;
        cout << '#' << num << " : " << a << endl;
        ++num;
    }
}