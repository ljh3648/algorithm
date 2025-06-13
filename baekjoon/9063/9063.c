#include <stdio.h>

int main(void) {
	int n, x, y, x1, x2, y1, y2;

	scanf("%d", &n);
	scanf("%d %d", &x, &y);
	x1 = x2 = x;
	y1 = y2 = y;
	while (--n > 0) {
		scanf("%d %d", &x, &y);
		x1 = x1 < x ? x : x1;
		x2 = x2 > x ? x : x2;
		y1 = y1 < y ? y : y1;
		y2 = y2 > y ? y : y2;
	}
	printf("%d",(x1 - x2) * (y1 - y2));
	return 0;
}