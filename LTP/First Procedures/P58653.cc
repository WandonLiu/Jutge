#include <iostream>
using namespace std;

void print_line(char c, string s, bool b) {
         cout << s << "('" << c << "') = ";
         if (b) cout << "true" << endl;
         else cout << "false" << endl;
}

bool letter(char c){
	if ((c >= 'A' and c <= 'Z') or (c >= 'a' and c <= 'z')) return true;
	return false;
}

bool vowel(char c) {
	if (c == 'A' or c == 'a' or c == 'E' or c == 'e' or c == 'I' or c == 'i' or c == 'O' or c == 'o' or c == 'U' or c == 'u')
		return true;
	return false;
}

bool uppercase(char c) {
	if (c >= 'A' and c <= 'Z') return true;
	return false;
}

bool digit(char c) {
	if (c >= '0' and c <= '9') return true;
	return false;
}

int main(){
	char c;
	cin >> c;
	bool l = letter(c), up = uppercase(c), v = vowel(c);
	print_line(c, "letter", letter(c));
	print_line(c, "vowel", v);
	print_line(c, "consonant", !v and l);
	print_line(c, "uppercase", up);
	print_line(c, "lowercase", !up and l);
	print_line(c, "digit", digit(c));
}