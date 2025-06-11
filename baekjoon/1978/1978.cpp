#include <iostream>
using namespace std;

int main(void) {
	int N, K, Kcnt = 0;
	bool flag;
	cin >> N;
	for (int i = 0; i < N; i++) {
		flag = false;
		cin >> K;
		for (int j = 2; j < K; j++) {
			if (K % j == 0) {
				flag = true;
				break;
			};
		}
		if (!flag && (K > 1)){
			Kcnt++;
		}
	}
	cout << Kcnt;
	return 0;
}