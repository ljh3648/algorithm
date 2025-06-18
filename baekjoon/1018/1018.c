#include <stdio.h>

int main(void) {
	char arr[53][53];
	int N, M, best = 999999999, cnt = 0;
	char startW[8][8] = {
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'}
	};
	char startB[8][8] = {
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'},
		{'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'},
		{'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'}
	};
	
	scanf("%d %d", &N, &M);
	for (int i = 0; i < N; i++) {
		scanf("%s", arr[i]);
	}

	for(int x = 0; x < N - 7; x++){
		for(int y = 0; y < M - 7; y++){
			int cntW = 0, cntB = 0;
			for(int i = 0; i < 8; i++){
				for(int j = 0; j < 8; j++){
					if(arr[i+x][j+y] != startW[i][j]) cntW++;
                    if(arr[i+x][j+y] != startB[i][j]) cntB++;
				}
			}
			cnt = cntW < cntB ? cntW : cntB;
            if(cnt < best) best = cnt;
		}
	}
	printf("%d", best);

	return 0;
}