#include <stdio.h>

int main(void){
    char str[101], cnt = 0;
    scanf("%s",str);
    for(int i = 0; i < 101; i++){
        if(str[i] != '\0') cnt++;
        else break;
    }
    printf("%d", cnt);
    return 0;
}

//strlen함수로 대체 가능 strlen(str);