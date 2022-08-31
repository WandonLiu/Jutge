#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

bool is_symmetric(const Matrix& m){
    int s = m.size();
    for (int i = 0; i < s; ++i){
        for (int j = i; j < s; ++j){
            if (m[i][j] != m[j][i]) return false;
        }
    }
    return true;
}