#include <stdio.h>

int main(void){
    int a, b, sum;
    while(1){
        scanf("%d %d", &a, &b);
        if (!(sum = a + b)) return 0; 
        printf("%d\n", sum);
    }
} 