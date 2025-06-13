#include <stdio.h>

int main(void) {
	int a[3], t, i;
	while (1) {
		int s = 0;
		for (i = 0; i < 3; i++) {
			scanf("%d", &a[i]);
			s += a[i];
		}
		for (i = 0; i < 2; i++) {
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
		if (s == 0) break;
		else if ((a[0] == a[1]) && (a[1] == a[2])) printf("Equilateral\n");
		else if (a[0] + a[1] > a[2]) {
			if (a[0] != a[1] && a[0] != a[2] && a[1] != a[2]) printf("Scalene\n");
			else printf("Isosceles\n");
		}
		else {
			printf("Invalid\n");
		}
	}
	return 0;
}