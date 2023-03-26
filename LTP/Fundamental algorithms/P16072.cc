#include <iostream>
#include <vector>
using namespace std;

vector<double> intersection(const vector<double>& v1, const vector<double>& v2){
    vector<double> res;
    int i = 0, l = 0, r = 0;
    
    while (l < v1.size() && r < v2.size()){
        if (v1[l] == v2[r]){
            if (res.size() > 0 && res[i] != v1[l]) {
                res.push_back(v1[l]);
                ++i;
            }
            else if (res.size() == 0) res.push_back(v1[l]);
            ++l; ++r;
            continue;
        }
        if (v1[l] < v2[r]) ++l;
        else ++r;
    }
    
    return res;
}