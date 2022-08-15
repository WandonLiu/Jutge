#include <iostream>
using namespace std;

int main(){
    int num, line = 0, last = -1;
    bool asc = false;
    while (cin >> num){
        string s, aux = "a";
        asc = true;
        for (int i = 0; i < num; ++i){
            cin >> s;
            if (s < aux) asc = false;
            aux = s;
        }
        ++line;
        if (asc) last = line;
    }
    if (last > -1) cout << "The last line in increasing order is " << last << '.' << endl;
    else cout << "There is no line in increasing order." << endl;
}