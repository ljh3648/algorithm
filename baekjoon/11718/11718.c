#include <stdio.h>
#include <string.h>

int main(void){
    char str[110][110];
    int i = 1;
    while(i++){
        if((void *)(fgets(str[i-1], sizeof(str), stdin)) == NULL) return 0;
        // str[i-1][strlen(str[i-1]) - 1] = '\0';
        printf("%s", str[i-1]);
    }
    return 0;
}

// # include <stdio.h>
// int main(){

// 	char a;
	
// 	while(scanf("%c", &a)!=-1) printf("%c", a);
	
// 	return 0;
// }