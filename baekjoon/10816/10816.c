#include <stdio.h>
#include <stdlib.h>

int cmp(const void *n1, const void *n2) {
	int a = *(const int *)n1;
	int b = *(const int *)n2;

	if (a < b) return -1;
	else if (a > b) return 1;

	return 0;
}

int lowerBound(const int key, const int *arr, int n) {
	int l = 0;
	int r = n - 1;
	int result = -1;

	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] < key) {
			l = m + 1;
		}
		else if (arr[m] >= key) {
			if(arr[m] == key) result = m;
			r = m - 1;
		}
	}

	return result;
}

int upperBound(const int key, const int *arr, int n) {
	int l = 0;
	int r = n - 1;
	int result = -1;
	
	while (l <= r) {
		int m = l + (r - l) / 2;
		if (arr[m] <= key) {
			if(arr[m] == key) result = m;
			l = m + 1;
		}
		else if (arr[m] > key) {
			r = m - 1;
		}
	}

	return result;
}
 

int main(void) {
	int n, *arr;

	scanf("%d", &n);

	arr = (int *)calloc(n, sizeof(int));

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), cmp);

	int m;

	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		int key;
		scanf("%d", &key);
		int l_index= lowerBound(key, arr, n);
		if(l_index == - 1){
			printf("0 ");
			continue;
		} 
		int r_index= upperBound(key, arr, n);
		printf("%d ", r_index - l_index + 1);
	}

	return 0;
}