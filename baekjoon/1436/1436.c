#include <stdio.h>

int main(void) {
	unsigned long long int N, X = 665;
	int cnt = 0, six_cnt = 0;
	
	scanf("%llu", &N);
	while (cnt < N) {
		unsigned long long int temp = ++X;
		six_cnt = 0;
		while (temp > 0) {
			int a = temp % 10;
			temp /= 10;
			if (a == 6) {
				six_cnt++;
			} else {
				six_cnt = 0;
			}
			if (six_cnt == 3) {
				cnt++;
				break;
			}
		}
	}
	printf("%llu", X);
	
	return 0;
}