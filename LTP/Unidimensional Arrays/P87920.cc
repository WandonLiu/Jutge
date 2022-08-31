#include <iostream>
#include <vector>
using namespace std;

int sum_vector(const vector<int>& v){
    int sum = 0;
    for (int i = 0; i < v.size(); ++i) sum += v[i];
    return sum;
}

bool sum_rest(const vector<int>& v){
    int sum = sum_vector(v);
    for (int i = 0; i < v.size(); ++i){
        if (v[i] == sum-v[i]) return true;
    }
    return false;
}

int main(){
    int n;
    while (cin >> n){
        vector<int> v(n);
        for (int i = 0; i < n; ++i) cin >> v[i];
        if (sum_rest(v)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}