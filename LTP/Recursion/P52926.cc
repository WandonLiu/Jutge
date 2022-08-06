#include <iostream>
using namespace std;

void reverse_list(){
    string word;
    cin >> word;
    if (word != "end"){
        reverse_list();
        cout << word << endl;
    }
}

int main(){
    reverse_list();
}