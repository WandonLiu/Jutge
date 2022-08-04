#include <iostream>
#include <string>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int c = 0;
	for (int i = 0; i < s.size(); ++i){
		if (s[i] == 'a') ++c;
	}
	cout << c << endl;
}