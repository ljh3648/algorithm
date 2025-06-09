#include <stdio.h>

int main(void){
	int n, b = 2, cnt = 1;
	scanf("%d",&n);
	while(1){
		if(b > n) break;
		else b += (6 * cnt++);
	}
	printf("%d", cnt);
	return 0;
}