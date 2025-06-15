#include <stdio.h>

int main(void) {
	unsigned long long int n;
	scanf("%llu", &n);
	printf("%llu\n2", n < 2 ? 0 : (n - 1) * (1 + (n - 1)) / 2);
	return 0;
}