#include <iostream>
using namespace std;

const string ca = "A____A";
const string s = "||[]||";
const string t = "||__||";
const string l = "~~~~~~";

const string e = "----";
const string di = "[][]";

int main(){
	string a, b, c, d;
	cin >> a >> b >> c >> d;
	if (a == ca and b == s and c == t and d == l) cout << "castell" << endl;
	else if (a == e and b == di and c == di and d == di) cout << "edifici" << endl;
	else cout << "no res" << endl;
}