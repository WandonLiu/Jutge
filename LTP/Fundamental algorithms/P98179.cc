#include <iostream>
#include <vector>
using namespace std;

void insert(vector<double>& v){
	int m = v.size()-1;
	if (v[m] < v[m-1]) {
		int i = 0;
		while (v[i] < v[m]) ++i;
		for (i; i <= m; ++i){
			double aux = v[i];
			v[i] = v[m];
			v[m] = aux;
		}
	}
}
