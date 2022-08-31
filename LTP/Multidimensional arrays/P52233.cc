#include <iostream>
#include <string>
#include <vector>
using namespace std;

typedef vector<string> Row;
typedef vector<Row> Matrix;

int number_of_words(const Matrix& m, char c, int k){
    int res = 0;
    for (int i = 0; i < m.size(); ++i) {
        for (int j = 0; j < m[i].size(); ++j){
            if (m[i][j].size() >= k and m[i][j][k] == c) ++res;
        }
    }
    return res;
}