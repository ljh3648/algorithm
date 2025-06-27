#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int age;
	char name[101];
}Info;

int cmp(const void *a, const void *b) {
	const Info *a1 = (const Info *)a;
	const Info *a2 = (const Info *)b;

	if (a1->age != a2->age ){
		return a1->age - a2->age;
	}
	else {
		return 0;
	}
}

int main(void) {
	int N;
	scanf("%d", &N);

	Info arr[N];
	for (int i = 0; i < N; i++) {
		scanf("%d %s", &arr[i].age, arr[i].name);
	}

	qsort(arr, N, sizeof(Info), cmp);

	for (int i = 0; i < N; i++) {
		printf("%d %s\n", arr[i].age, arr[i].name);
	}


	return 0;
}