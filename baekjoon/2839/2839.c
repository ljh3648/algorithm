#include <stdio.h>

int main(void) {
	int N, fcnt = 0, tcnt = 0;
	scanf("%d", &N);
	fcnt = N / 5;
	tcnt = N / 3;
	for (int i = fcnt; i >= 0; i--) {
		for (int j = 0; j <= tcnt; j++) {
			if ((5 * i) + (3 * j) == N){
				printf("%d", i + j);
				return 0;
			}
		}
	}
	printf("-1");
	return 0;
}

// #include <stdio.h>
// 
// int main(void) {
    // int N;
    // scanf("%d", &N);
    // int cnt = 0;
    // while (N >= 0) {
        // if (N % 5 == 0) {
            // cnt += N / 5;
            // printf("%d", cnt);
            // return 0;
        // }
        // N -= 3;
        // cnt++;
    // }
    // printf("-1");
    // return 0;
// }