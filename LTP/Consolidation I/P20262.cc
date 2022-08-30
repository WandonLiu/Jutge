#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    while (cin >> n){
        vector<int> nums(n);
        int suml = 0, maxl = 0, sumr = 0, maxr = 0;
        for (int i = 0; i < n; ++i){
            cin >> nums[i];
            suml += nums[i];
            if (suml > maxl) maxl = suml;
        }
        for (int i = n-1; i >= 0; --i) {
            sumr += nums[i];
            if (sumr > maxr) maxr = sumr;
        }
        cout << maxl << ' ' << maxr << endl;
    }
}
