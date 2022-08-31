#include <iostream>
#include <vector>
using namespace std;

typedef vector<int> Row;
typedef vector<Row> Matrix;

void print_row(Matrix m, int row){
    cout << "row " << row << ':';
    for (int i = 0; i < m[row-1].size(); ++i){
        cout << ' ' << m[row-1][i];
    }
    cout << endl;
}

void print_col(Matrix m, int col){
    cout << "column " << col << ':';
    for (int i = 0; i < m.size(); ++i){
        cout << ' ' << m[i][col-1];
    }
    cout << endl;
}


int main(){
    int r, c;
    cin >> r >> c;
    Matrix m(r, Row(c));

    for (int i = 0; i < r; ++i){
        for (int j = 0; j < c; ++j){
            cin >> m[i][j];
        }
    }    

    string s;
    while (cin >> s){
        if (s == "row") {
            int row;
            cin >> row;
            print_row(m, row);
        }
        else if (s == "column") {
            int col;
            cin >> col;
            print_col(m, col);
        }
        else if (s == "element") {
            int row, col;
            cin >> row >> col;
            cout << "element " << row << ' ' << col << ": " << m[row-1][col-1] << endl;
        }
    }
}