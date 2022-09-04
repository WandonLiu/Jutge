#include <iostream>
#include <vector>
using namespace std;

vector<double> merge(const vector<double>& v1, const vector<double>& v2){
	int l1 = v1.size(), l2 = v2.size();
	vector<double> res(l1+l2);
	int i = 0, j = 0;
	while (i < l1 and j < l2){
		if (v1[i] < v2[j]) {
			res[i+j] = v1[i];
			++i;
		}
		else {
			res[i+j] = v2[j];
			++j;
		}
	}
	if (i == l1){
		for (j; j < l2; ++j){
			res[i+j] = v2[j];
		}
	}
	else {
		for (i; i < l1; ++i){
			res[i+j] = v1[i];
		}
	}
	return res;
}