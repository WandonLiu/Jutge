#include <iostream>
#include <string>
using namespace std;

void reverse(string s){
    for (int i = s.size()-1; i >= 0; --i) cout << s[i];
    cout << endl;
}

void reverse_string_list(int n){
    string s;
    if (n > 0){
        cin >> s;
        reverse_string_list(--n);
        reverse(s);
    }
}

int main(){
    int n;
    cin >> n;
    reverse_string_list(n);
}