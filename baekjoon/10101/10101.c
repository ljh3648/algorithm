#include <stdio.h>

int main(void) {
	int a[3], sum = 0;
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
		sum += a[i];
	}
	if (sum == 180) {
		if (a[0] == a[1] && a[0] == a[2]) printf("Equilateral");
		else if(a[0] != a[1] &&  a[1] != a[2] && a[0] != a[2]) printf("Scalene");
		else printf("Isosceles");
	}
	else {
		printf("Error");
	}
	return 0;
}