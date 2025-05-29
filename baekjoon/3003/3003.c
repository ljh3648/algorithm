#include <stdio.h>

int main(void){
    int chess[6][1] = {1, 1, 2, 2, 2, 8};
    int a[6][1] = {0};
    for(int i = 0; i<6; i++) scanf("%d", &a[i][0]);
    for(int i = 0; i<6; i++) printf("%d ", chess[i][0] - a[i][0]);
    return 0;
}