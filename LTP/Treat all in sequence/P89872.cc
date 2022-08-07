#include <iostream>
using namespace std;

int main(){
    string max, sec, input;
    cin >> max >> sec;
    if (max == sec) sec = 'a';
    else if (max < sec) {
        input = sec;
        sec = max;
        max = input;
    }
    while (cin >> input) {
        if (input != max and input != sec){
            if (input > max){
                sec = max;
                max = input;
            }
            else if (input > sec){
                sec = input;
            }
        }
    }
    cout << sec << endl;
}