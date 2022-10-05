#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b){
	int aux = a;
	a = b;
	b = aux;
}

int main(){
	int n;
	cin >> n;
	vector <int> v(n+n);
	for (int i = n; i < 2*n; ++i){
		cin >> v[i];
	}
	int pos;
	for (int i = 0; i < n; ++i){
		cin >> pos;
		v[pos] = v[i+n];
	}
	for (int i = 0; i < n; ++i){
		if (i > 0) cout << ' ';
		cout << v[i];
	}
	cout << endl;
}