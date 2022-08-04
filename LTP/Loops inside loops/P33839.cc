#include <iostream>
using namespace std;

int main(){
	int num;
	while (cin >> num){
		cout << "The sum of the digits of " << num << " is ";
		int sum = 0;
		while (num > 0){
			sum += num%10;
			num /= 10;
		}
		cout << sum << '.' << endl;
	}
}