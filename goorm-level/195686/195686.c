#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	scanf("%d", &n);
	
	int *arr = (int *)calloc(n, sizeof(int));
	int score = 0, maxIndex = 0;
	
	for(int i = 0; i < n; i++){
		scanf("%d", &arr[i]);
		score += arr[i];
		if(arr[maxIndex] <= arr[i]) maxIndex = i;
	}

	for(int i = 1; i < maxIndex; i++){
		if(arr[i - 1] > arr[i]){
			printf("0");
			return 0;
		}	
	}

	for(int i = maxIndex + 1; i < n; i++){
		if(arr[i - 1] < arr[i]){
			printf("0");
			return 0;
		}	
	}

	printf("%d", score);
	free(arr);
	return 0;
}
