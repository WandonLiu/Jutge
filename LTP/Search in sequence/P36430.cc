#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool found = false;
    for (int i = a; not found and i <= b; ++i){
        for (int j = c; not found and j <= d; ++j){
            double z = sqrt(i*i + j*j);
            int aux = int(z);
            if (double(aux) == z){
                cout << i << "^2 + " << j << "^2 = " << aux << "^2" << endl;
                found = true;
            }
        }
    }
    if (not found) cout << "No solution!" << endl;
}