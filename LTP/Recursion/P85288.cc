#include <iostream>
using namespace std;

void hanoi(int n, char A, char B, char C){
    if (n > 0) {
        hanoi(n-1, A, C, B);
        cout << A << " => " << C << endl;
        hanoi(n-1, B, A, C);
    }
}

int main(){
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');
}