#include <stdio.h>

int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	if (y > x){
		int aux = x;
		x = y;
		y = aux;
	}
	for (int i = x; i >= y; --i){
		printf("%d\n", i);
	}
}