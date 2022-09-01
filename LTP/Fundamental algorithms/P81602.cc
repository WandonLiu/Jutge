#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<double>& v, int m){
	for (int i = 0; i < m; ++i){
		double min = v[i];
		int pos = i;
		for (int j = i+1; j <= m; ++j){
			if (v[j] < min) {
				min = v[j];
				pos = j;
			}
		}
		v[pos] = v[i];
		v[i] = min;
	}
}
