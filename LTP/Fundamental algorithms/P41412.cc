#include <iostream>
#include <vector>
using namespace std;

void swap(double& a, double& b){
	double aux = a;
	a = b;
	b = aux;
}

void insertion_sort(vector<double>& v){
	int len = v.size();
	for (int i = 0; i < len-1; ++i){
		int j = i+1;
		while (v[j] < v[j-1] and j > 0){
			swap(v[j], v[j-1]);
			--j;
		}
	}
}

