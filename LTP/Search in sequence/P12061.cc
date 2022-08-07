#include <iostream>
using namespace std;

int main(){
    string s;
    int c = 0;
    bool start = false, end = false;
    while (not end and cin >> s){
        if (s == "end") end = true;
        if (start and not end) ++c;
        if (s == "beginning") start = true;
    }
    if (start and end) cout << c << endl;
    else cout << "wrong sequence" << endl;
}