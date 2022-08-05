#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	for (int i = 0; i <= n; ++i){
		int cube = i*i*i;
		printf("%d", cube);
		if (i != n){
			printf(",");
		}
	}
	printf("\n");
}