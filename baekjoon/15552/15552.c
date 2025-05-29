#include <stdio.h>

int main(void){
    int value;
    int a,b;
    scanf("%d", &value);
    for(int i = 0; i < value; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
    return 0;
}