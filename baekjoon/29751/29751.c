#include <stdio.h>

int main(void){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%.1lf", (double)(a * b) / 2);
	return 0;
}