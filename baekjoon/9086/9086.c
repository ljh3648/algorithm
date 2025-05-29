#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    scanf("%d",&T);
    char str[10][1000];
    for(int i = 0; i < T; i++){
        scanf("%s",str[i]);
        printf("%c%c\n", str[i][0],str[i][strlen(str[i])-1]);
    } 
    return 0;
}