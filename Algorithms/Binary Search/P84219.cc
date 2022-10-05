#include <iostream>
#include <vector>
using namespace std;

int search(double x, const vector<double>& v, int l, int r){
	if (l > r) return -1;

	int middle = (l+r)/2;

	if (v[middle] > x) return search(x, v, l, middle-1);
	else if (v[middle] < x) return search(x, v, middle+1, r);

	if (v[middle] == x){
		int pos = search(x, v, l, middle-1);
		if (pos > -1) return pos;
	}
	return middle;
}


 int first_occurrence(double x, const vector<double>& v){
 	return search(x, v, 0, v.size()-1);
 }
