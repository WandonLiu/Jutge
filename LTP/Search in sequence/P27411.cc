#include <iostream>
using namespace std;

int main(){
    int pos, num, i = 1;
    cin >> pos >> num;
    while (num > -1 and i < pos){
        ++i;
        cin >> num;
    }
    if (num == -1 or pos < 1) cout << "Incorrect position.\n";
    else cout << "At the position "<< pos << " there is a(n) " << num << '.' << endl;
}