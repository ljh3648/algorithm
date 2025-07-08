#include <stdio.h>
#include <string.h>

int main(void){
	int n;
	scanf("%d",&n);
	for(int i = 0; i < n; i++){
		char str[21];
		scanf("%s", str);
		int len = strlen(str);
		if(len >= 6 && len <= 9) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}