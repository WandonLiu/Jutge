#include <iostream>
#include <vector>
using namespace std;

typedef vector< vector<int> > Matrix;
 	
void swap(int& a, int& b) {
    int c = a;
    a = b;
    b = c;
}

void transpose(Matrix& m){
    for (int i = 0; i < m.size(); ++i){
        for (int j = i+1; j < m[i].size(); ++j){
            swap(m[i][j], m[j][i]);
        }
    }
}
