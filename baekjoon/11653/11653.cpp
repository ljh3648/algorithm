#include <iostream>
using namespace std;

int main(void) {
	int N, arr[1000000], cnt = 0;
	cin >> N;

	for (int i = 2; i <= N; i++) {
		if (N % i == 0) arr[cnt++] = i;
	}

	int i = 0;
	while (i != cnt) {
		if (N % arr[i] == 0) {
			N /= arr[i];
			cout << arr[i] << endl;
		}
		else i++;
	}

	return 0;
}