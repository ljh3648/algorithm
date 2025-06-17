#include <stdio.h>

int main(void){
	int a1, a0, c, n0;
	int f, n, value;
	
	scanf("%d %d %d %d", &a1, &a0, &c, &n0);
	n = n0;
	f = (a1 * n) + a0;
	value = c * n;

	if( a1 <= c && f <= value ){
		printf("1");
	}
	else{
		printf("0");
	}

	return 0;
}