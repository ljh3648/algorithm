#include <stdio.h>

int main(void){
	unsigned long long int n;
	scanf("%llu", &n);
	printf("%llu\n3",n < 3 ? 0 : (n * (n - 1) * (n - 2)) / 6);
	return 0;
}