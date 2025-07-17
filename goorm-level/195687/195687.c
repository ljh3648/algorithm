#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int value;
	int cnt;
}Value;

int cmp (const void * n1, const void * n2){
	Value a = *(const Value *)n1;
	Value b = *(const Value *)n2;
	
	if (a.cnt < b.cnt){
		return 1;
	} 
	else if (a.cnt > b.cnt){
		return -1;
	}
	else{
		if(a.value < b.value){
			return 1;
		}
		else if(a.value > b.value){
			return -1;
		}
		else{
			return 0;
		}
	}
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	Value *arr = (Value *)calloc(n, sizeof(Value));
	
	for(int i = 0; i < n; i++){
		arr[i].cnt = 0;
		scanf("%d", &arr[i].value);
		
		int temp = arr[i].value;
				
		while(temp > 0){
			if(temp % 2 == 1){
				arr[i].cnt++;
			}
			temp /= 2;
		}
	}

	qsort(arr, n, sizeof(Value), cmp);

	printf("%d", arr[k-1].value);

	return 0;
}
