#include <stdio.h>

int main(void){
    int H, M;
    int T;

    scanf("%d %d", &H, &M);
    scanf("%d", &T);

    int timer = (H * 60) + M + T;

    if (timer / 60 >= 24) timer -= (60*24);

    printf("%d %d", timer / 60, timer % 60); 

    return 0;
}