#include <stdio.h>

int main(void){
    int N, M, a[100]={0};
    scanf("%d %d", &N, &M);
    
    int i, j, k;
    for(int ii = 0; ii < M; ii++){
        scanf("%d %d %d", &i, &j, &k);
        for(;i <= j; i++) a[i-1] = k;
    }
    for(int ii = 0; ii < N; ii++) printf("%d ",a[ii]);

    return 0;
}