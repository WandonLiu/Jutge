#include <iostream>
using namespace std;

int main(){
	char c;
	cin >> c;
	if (c >= '0' and c <= '9') cout << "digit" << endl;
	else if ((c >= 'a' and c <= 'z') or (c >= 'A' and c <= 'Z')) cout << "lletra" << endl;
	else cout << "res" << endl;
}