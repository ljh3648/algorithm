#include <iostream>
using namespace std;

int main(void){
	int N, K, cnt = 0;
	cin >> N >> K;
	for(int i = 1; i <= N; i++){
		if(N % i == 0) cnt++;
		if(cnt == K){
			cout << i;
			return 0;
		}
	}
	cout << 0;
	return 0;
}