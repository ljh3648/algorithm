#include <stdio.h>

int main(void){
    int n, val = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        val = val + i;
    }

    printf("%d",val);

    return 0;
}