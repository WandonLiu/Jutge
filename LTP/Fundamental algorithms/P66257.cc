#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    while (cin >> x) {
        unordered_map<int, int> wordCount;
        int num;
        int mostFrequent = 0;
        int mostNum = -1;
        for (int i = 0; i < x; ++i) {
            cin >> num;
            wordCount[num]++;
            if (mostFrequent < wordCount[num]) {
                mostNum = num;
                mostFrequent = wordCount[num];
            }
            if (mostFrequent == wordCount[num])
                mostNum = max(mostNum, num);
        }
        cin >> x;
        for (int i = 0; i < x; ++i) {
            cin >> num;
            wordCount[num]++;
            if (mostFrequent < wordCount[num]) {
                mostNum = num;
                mostFrequent = wordCount[num];
            }
            if (mostFrequent == wordCount[num])
                mostNum = max(mostNum, num);
        }

        cout << mostNum << ' ' << mostFrequent << endl;
    }
}