#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[N];
    for(int a = 0; a < N; a++) arr[a] = a+1;
    
    int i, j, tmp;
    for(int a = 0; a < M; a++){
        scanf("%d %d", &i, &j);
        tmp = arr[i-1];
        arr[i-1] = arr[j-1];
        arr[j-1] = tmp; 
    }

    for(int a = 0; a < N; a++) printf("%d ",arr[a]);

    return 0;
}