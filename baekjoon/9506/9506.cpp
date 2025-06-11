#include <iostream>
using namespace std;

int main(void) {
	int N, sum = 0, arr[100000], index = 0;
	while (true) {
		cin >> N;
		if(N == -1) break;

		for (int i = 1; i < N; i++) {
			if (N % i == 0) {
				sum += i;
				arr[index++] = i;
			}
		}

		cout << N;
		if (sum == N){
			cout << " = ";
			for(int i = 0; i < index - 1; i++){
				cout << arr[i] << " + ";
			}
			cout << arr[index - 1] << "\n";
		}
		else{
			cout << " is NOT perfect.\n";
		}
		index = sum = 0;
	}
	return 0;
}