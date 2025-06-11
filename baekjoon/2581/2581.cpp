#include <iostream>
using namespace std;

int main(void){
	int N, M, sum = 0, min = -1;
	bool flag;

	cin >> N >> M;
	for(int i = N; i <= M; i++){
		flag = false;

		for(int j = 2; j < i; j++){
			if(i % j == 0){
				flag = true;
				break;
			}
		}
		
		if(!flag && i > 1){
			if(sum == 0){
				min = i;
			}
			sum+=i;
		}
	}

	if(min != -1){
		cout << sum << endl;
	}
	cout << min << endl;
	return 0;
}