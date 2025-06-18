#include <stdio.h>

int main(void){
	int N, M;
	int card[100], sum = 0, best = 0;

	scanf("%d %d", &N, &M);

	for(int i = 0; i < N; i++){
		scanf("%d", &card[i]);
	}

	for(int i = 0; i < N; i++){
		for(int j = i + 1; j < N; j++){
			for(int k = j + 1; k < N; k++){
				sum = card[i] + card [j] + card[k];
				if(sum <= M && sum > best) best = sum;
			}
		}
	}
	printf("%d", best);

	return 0;
}