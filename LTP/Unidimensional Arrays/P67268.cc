#include <iostream>
#include <vector>
using namespace std;

int main(){
    int x;
    while (cin >> x){
        vector<int> v(x);
        for(int i = x-1; i >= 0; --i){
            cin >> v[i];
        }
        for (int i = 0; i < x; ++i){
            if (i > 0) cout << ' ';
            cout << v[i]; 
        }
        cout << endl;
    }
}