#include <stdio.h>

int main(void) {
	int N, tmp;
	int arr[10001] = { 0, };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &tmp);
		arr[tmp]++;
	}
	for (int i = 0; i < 10001; i++) {
		for(int j = 0; j < arr[i]; j++) {
			printf("%d\n", i);
		}
	}
	return 0;
}