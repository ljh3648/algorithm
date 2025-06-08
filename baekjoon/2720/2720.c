#include <stdio.h>

int main(void){
	int q, d, n, p, T;
	scanf("%d", &T);
	int arr[T]; 
	for(int i = 0; i < T; i++){
		scanf("%d", &arr[i]);
		q = arr[i] / 25;
		arr[i] -= 25 * q;
		d = arr[i] / 10;
		arr[i] -= 10 * d;
		n = arr[i] / 5;
		arr[i] -= 5 * n;
		printf("%d %d %d %d\n", q, d, n, arr[i]); 
	}
	return 0;
}