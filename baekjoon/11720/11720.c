#include <stdio.h>

int main(void){
    int N,total=0;
    scanf("%d", &N);
    char a[100];
    for(int i = 0; i < N; i++){
        scanf(" %c", &a[i]);
        total += a[i] - '0';
    }
    printf("%d", total);
    return 0;
}