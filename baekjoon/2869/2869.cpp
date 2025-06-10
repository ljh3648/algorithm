#include <iostream>
using namespace std;

int main(void) {
	int v, a, b, x;
	cin >> a >> b >> v;
	x = (v - b - 1) / (a - b) + 1;
	cout << x;
	return 0;
}

//g++-13 -g *.cpp -o main