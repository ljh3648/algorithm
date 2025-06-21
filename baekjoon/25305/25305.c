#include <stdio.h>

int main(void) {
	int N, k;
	scanf("%d %d", &N, &k);
	int a[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1 - i; j++) {
			if (a[j] < a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}

	printf("%d", a[k - 1]);

	return 0;
}