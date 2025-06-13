#include <stdio.h>

int main(void) {
	int a[3];

	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < 2; i++) {
		if (a[i] > a[i + 1]){
			int temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
		}
	}

	while(a[0] + a[1] <= a[2]){
		a[2]--;
	}

	printf("%d",a[0]+a[1]+a[2]);
	return 0;
}