#include <iostream>
using namespace std;

int main(){
    string word = "hello";
    int pos = 0;
    char c;
    cin >> c;
    while (c != '.' and pos < 5){
        if (c == word[pos]) ++pos;
        else if (c == 'h') pos = 1;
        else pos = 0;
        cin >> c; 
    }
    if (pos == 5) cout << "hello" << endl;
    else cout << "bye" << endl;
}