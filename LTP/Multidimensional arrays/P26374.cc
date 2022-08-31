#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;

Matrix sum(const Matrix& a, const Matrix& b){
    int s = a.size();
    Matrix res(s, vector<int>(s, 0));
    for (int i = 0; i < s; ++i){
        for (int j = 0; j < s; ++j){
            res[i][j] += a[i][j] + b[i][j];
        }
    }
    return res;
}