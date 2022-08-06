#include <iostream>
using namespace std;

void reverse_list(int& n){
    string word;
    if (cin >> word){
        reverse_list(n);
        if (n > 0) {
            cout << word << endl;
            --n;
        }
    }
}

int main(){
    int n;
    cin >> n;
    reverse_list(n);
}