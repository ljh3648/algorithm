#include <stdio.h>

int main(void) {
	int n, sum = 0, temp;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		sum = temp = i;
		while (temp > 0) {
			sum += temp % 10;
			temp = temp / 10;
		}
		if (sum == n){
			sum = i;
			break;
		}
		else sum = 0;
	}
	printf("%d", sum);
}