#include <stdio.h>

int main(void) {
	int n[5], avg = 0;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &n[i]);
		avg += n[i];
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4 - i; j++) {
			if (n[j] > n[j + 1]) {
				int tmp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = tmp;
			}
		}
	}

	printf("%d\n%d", avg / 5, n[2]);

	return 0;
}