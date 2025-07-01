#include <stdio.h>
#include <stdlib.h>

int cmp(const void *n1, const void *n2) {
	int a = *(const int *)n1;
	int b = *(const int *)n2;

	if (a != b) {
		return a - b;
	}
	return 0;
}

int main(void) {
	int N, M;

	scanf("%d", &N);
	int userCardArr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d", &userCardArr[i]);
	}

	scanf("%d", &M);
	int checkCardArr[M];
	for (int i = 0; i < M; i++) {
		scanf("%d", &checkCardArr[i]);
	}

	qsort(userCardArr, N, sizeof(int), cmp);
	
	for (int i = 0; i < M; i++) {
		int *temp = bsearch(&checkCardArr[i], userCardArr, N, sizeof(int), cmp);
		if(temp != NULL){
			printf("1 ");
		}else{
			printf("0 ");
		}
	}

	return 0;
}