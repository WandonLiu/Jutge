#include <iostream>
#include <vector>
using namespace std;

const int NUM = 1000000000;

int main(){
    vector<int> v(1001);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        ++v[x-NUM];
    }
    for (int i = 0; i <= 1000; ++i){
        if (v[i] > 0) cout << NUM+i << " : " << v[i] << endl;
    }
}