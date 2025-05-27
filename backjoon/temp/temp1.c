#include <stdio.h>

int main(void){
    int a, b;
    
    scanf("%d %d", &a, &b);

    int c1 = (b % 10), c2 = (b % 100) - c1, c3 = (b % 1000) - c2;
    
    printf("%d\n%d\n%d\n%d\n", a * c1, a * c2, a * c3, a * b);
    
    return 0;
}