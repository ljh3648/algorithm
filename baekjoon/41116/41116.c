#include <stdio.h>

int main(void){
	long int n,result = 1;
	scanf("%ld", &n);

	for(int i = 1; i <= n; i++){
		result = result * 2;
	}
	
	result = (result+1) * (result+1);
	printf("%ld", result);
	
	return 0;
}