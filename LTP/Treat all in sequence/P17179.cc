#include <iostream>
using namespace std;

int main(){
    cout.setf(ios::fixed);
    cout.precision(4);
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i){
        int m;
        double max, min, avrg, num;
        cin >> m >> max;
        min = avrg = max;
        for (int j = 1; j < m; ++j){
            cin >> num;
            if (num > max) max = num;
            else if (num < min) min = num;
            avrg += num;
        }
        cout << min << ' ' << max << ' ' << avrg/m << endl;
    }
}