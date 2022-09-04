#include <iostream>
#include <vector>
using namespace std;

int position(double x, const vector<double>& v, int left, int right){
	if (left > right) return -1;
	int middle = (left+right)/2;
	if (v[middle] == x) return middle;
	else if (v[middle] > x) return position(x, v, left, middle-1);
	return position(x, v, middle+1, right);
}