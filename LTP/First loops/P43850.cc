#include <iostream>
using namespace std;

int main(){
	int num;
	while (cin >> num){
		num = ((num/5 -9)/4 - 6)/5;
		cout << num << endl;
	}
}