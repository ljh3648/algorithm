#include <stdio.h>

int main(void){
    int H, M;
    scanf("%d %d", &H, &M);

    int early_alarm = (H * 60) + M - 45;

    if(early_alarm < 0) early_alarm += (60 * 24);

    printf("%d %d", early_alarm / 60, early_alarm % 60);
    return 0;
}