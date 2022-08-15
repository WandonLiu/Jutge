#include <iostream>
using namespace std;

int main(){
    int pos, x;
    while (cin >> pos){
        int num = -1, aux = 1;
        while (cin >> x and x != -1){
            if (aux == pos) num = x;
            ++aux;
        }
        if (num == -1) cout << "Incorrect position." << endl;
        else cout << "At the position " << pos << " there is a(n) " << num << '.' << endl;
    }
}