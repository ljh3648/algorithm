// 그냥 한번 실험정신으로 만들어요..
#include <stdio.h>

int main(void){
    int a[9], *max = &a[0], **dmax = &max;
    
    for(int i = 0; i < 9; i++){
        scanf("%d", &a[i]);
        *dmax = (a[i] > *max) ? &a[i] : max;
    }

    printf("%d\n%d\n", *max, (int)(max - &a[0])+1);
    return 0;
}