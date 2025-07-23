#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int ac, ap;
	int bc, bp;

	cin >> ac >> ap;
	cin >> bc >> bp;

	int p = (ap * bp) / __gcd(ap, bp);
	int c = ac * (p / ap) + bc * (p / bp);

	int g = __gcd(c, p);
	cout << c / g << " " << p / g;

	return 0;
}