#include <iostream>
using namespace std;

void reverse_list(int& n, int& c){
    string word;
    if (cin >> word){
        reverse_list(++n, c);
        if (n/2+n%2 <= c ) {
            cout << word << endl;
        }
        ++c;
    }
}

int main(){
    int n = 0, c = 0;
    reverse_list(n, c);
}