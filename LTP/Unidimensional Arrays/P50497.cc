#include <iostream>
#include <string>
using namespace std;

bool is_palindrome(const string& s){
    int size = s.size();
    for (int i = 0; i < size/2; ++i){
        if (s[i] != s[size-i-1]) return false;
    }
    return true;
}
