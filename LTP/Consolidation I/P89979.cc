#include <iostream>
using namespace std;

int main(){
    int num, line = 0;
    bool asc = false;
    while (not asc and cin >> num){
        string s, aux = "a";
        asc = true;
        for (int i = 0; i < num; ++i){
            cin >> s;
            if (s < aux) asc = false;
            aux = s;
        }
        ++line;
    }
    if (asc) cout << "The first line in increasing order is " << line << '.' << endl;
    else cout << "There is no line in increasing order." << endl;
}