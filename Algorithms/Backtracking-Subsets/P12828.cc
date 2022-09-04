#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    int iterations = pow(2, n);
    for(int j = 0; j < n; ++j){
            if (j > 0) cout << ' ';
            cout << v[j];
        }
    cout << endl;
    for (int i = 0; i < iterations-1; ++i){
        int right = n-1;
        while (right >= 0 and v[right] == 1) {
            v[right] = 0;
            --right;
        }
        if (right >= 0) v[right] = 1; 
        for(int j = 0; j < n; ++j){
            if (j > 0) cout << ' ';
            cout << v[j];
        }
        cout << endl;
    }
}