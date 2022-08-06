#include <iostream>
using namespace std;

void reverse_list(){
    string word;
    if (cin >> word){
        reverse_list();
        cout << word << endl;
    }
}

int main(){
    reverse_list();
}