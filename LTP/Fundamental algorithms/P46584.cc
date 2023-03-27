#include <iostream>
#include <vector>
using namespace std;

vector<double> difference(const vector<double>& v1, const vector<double>& v2){
    vector<double> res;
    
    int i = 0; int j = 0;
    
    while (i < v1.size() && j < v2.size()){
        if (v1[i] == v2[j]){
            ++i;
        }        
        else if (v1[i] < v2[j]){
            if (k == 0 || res[k-1] != v1[i]){
                res.push_back(v1[i]);
                ++k;
                
            }
            ++i;
        }
        else ++j;
    }
    
    while (i < v1.size()){
        if (k == 0 || res[k-1] != v1[i]){
            res.push_back(v1[i]);
            ++k;
        }
        ++i;
    }
    return res;
}