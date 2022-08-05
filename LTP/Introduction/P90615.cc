#include <stdio.h>

int main()
{
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (b >= a && b >= c){
		a = b;
	}
	else if(c >= a && c >= b){
		a = c;
	}
	printf("%d\n", a);
}