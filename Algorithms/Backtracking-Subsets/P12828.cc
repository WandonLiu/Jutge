#include <bits/stdc++.h>
using namespace std;

#define vi vector<int> 
#define pii pair<int, int>
#define ll long long

void backtrack(int n, string curr) {
    if (curr.size() == n) {
        cout << curr[0];
        for (int i = 1; i < n; ++i) {
            cout << ' ' << curr[i];
        }
        cout << endl;
        return;
    }

    backtrack(n, curr+'0');
    backtrack(n, curr+'1');
}

void solve() {
    int n;
    cin >> n;

    backtrack(n, "");
}

int main() {
    solve();
}