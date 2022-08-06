#include <iostream>
using namespace std;

void reverse_list(int n){
    if (n > 0) {
        string word;
        cin >> word;
        reverse_list(n-1);
        cout << word << endl;
    }
}

int main(){
    int n;
    cin >> n;
    reverse_list(n);
}