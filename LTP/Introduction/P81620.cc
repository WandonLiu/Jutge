#include <iostream>
using namespace std;

int main(){
	int e, c;
	cin >> e >> c;
	cout << "Banknotes of 500 euros: " << e/500 << endl;
	e %= 500;
	cout << "Banknotes of 200 euros: " << e/200 << endl;
	e %= 200;
	cout << "Banknotes of 100 euros: " << e/100 << endl;
	e %= 100;
	cout << "Banknotes of 50 euros: " << e/50 << endl;
	e %= 50;
	cout << "Banknotes of 20 euros: " << e/20 << endl;
	e %= 20;
	cout << "Banknotes of 10 euros: " << e/10 << endl;
	e %= 10;
	cout << "Banknotes of 5 euros: " << e/5 << endl;
	e %= 5;
	cout << "Coins of 2 euros: " << e/2 << endl;
	e %= 2;
	cout << "Coins of 1 euro: " << e << endl;
	cout << "Coins of 50 cents: " << c/50 << endl;
	c %= 50;
	cout << "Coins of 20 cents: " << c/20 << endl;
	c %= 20;
	cout << "Coins of 10 cents: " << c/10 << endl;
	c %= 10;
	cout << "Coins of 5 cents: " << c/5 << endl;
	c %= 5;
	cout << "Coins of 2 cents: " << c/2 << endl;
	c %= 2;
	cout << "Coins of 1 cent: " << c << endl;
}