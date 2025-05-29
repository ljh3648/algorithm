#include <stdio.h>

int main(void){
    char str[1001];
    int sel;

    scanf("%s", str);
    scanf("%d", &sel);

    printf("%c",str[sel-1]);

    return 0;
}