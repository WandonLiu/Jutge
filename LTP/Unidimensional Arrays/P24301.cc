#include <iostream>
#include <vector>
using namespace std;

vector<int> concatenation(const vector<int>& v1, const vector<int>& v2){
    int s1 = v1.size(), s2 = v2.size();
    vector<int> res(s1+s2);
    for (int i = 0; i < s1; ++i){
        res[i] = v1[i];
    }
    for (int i = 0; i < s2; ++i){
        res[s1+i] = v2[i];
    }
    return res;
}