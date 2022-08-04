#include <iostream>

int main(){
	char c;
	std::cin >> c;
	if (c >= 'a' and c <= 'z') c -= 'a'-'A';
	else if (c >= 'A' and c <= 'Z') c += 'a' - 'A';
	std::cout << c << std::endl;
}