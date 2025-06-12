#include <iostream>
using namespace std;

int main(void) {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	x = ((w - x) < x ? (w - x) : x);
	y = ((h - y) < y ? (h - y) : y);

	cout << ((x > y) ? y : x);
	return 0;
}