#include <iostream>
using namespace std;

int main(){
	string s;
	for (int i = 0; i < 4; ++i){
		cin >> s;
		if (s == "arrissats") cout << "@@@@@";
		else if (s == "rodons") cout << ".o-o.";
		else if (s == "axafat") cout << "..0..";
		else if (s == "normal") cout << ".===.";
		else if (s == "llisos") cout << "VVVVV";
		else if (s == "aclucats") cout << ".-.-.";
		else if (s == "aguilenc") cout << "..V..";
		else if (s == "bigoti") cout << ".~~~.";
		else if (s == "pentinats") cout << "XXXXX";
		else if (s == "estrellats") cout << ".*-*.";
		else if (s == "arromangat") cout << "..C..";
		else cout << ".www.";
		cout << endl;
	}
}