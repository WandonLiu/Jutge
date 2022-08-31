#include <iostream>
#include <vector>
using namespace std;

int main(){
    int games;
    cin >> games;
    for (int i = 0; i < games; ++i){
        vector<string> v(10);
        int winner = 0;
        cin >> v[0];
        for (int j = 1; j < 10; ++j){
            cin >> v[j];
            if (not winner){
                if (v[j-1][v[j-1].size()-1] != v[j][0]) winner = j;
            }
        }
        if (winner == 0) cout << '=' << endl;
        else if (winner%2 == 0) cout << 'B' << endl;
        else cout << 'A' << endl;
    }
}