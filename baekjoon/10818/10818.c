#include <stdio.h>

int main(void){
    int n, v, min = 1000000, max = -1000000;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &v);
        min = (min > v) ? v : min;
        max = (max < v) ? v : max;
    }
    printf("%d %d", min, max);
    return 0;
}