#include <stdio.h>

int main(void) {
	int a, b, c, d, e, f, x = 0, y = 0;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);

	int xf = (c * e) - (f * b);
	int xff = (a * e) - (d * b);
	int yf = (c * d) - (a * f);
	int yff = (b * d) - (a * e);

	x = xf / xff;
	y = yf / yff;

	printf("%d %d", x, y);
	return 0;
}