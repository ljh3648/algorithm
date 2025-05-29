#include <stdio.h>

int main(void){
    int N, M;
    scanf("%d %d", &N, &M);

    int arr[N];
    for(int a = 0; a < N; a++) arr[a] = a+1;

    for(int a = 0; a < M; a++){
        int i, j;
        scanf("%d %d", &i, &j);
        int c = ((j - i) / 2) + ((j - i) % 2);
        for(int b = 0; b < c; b++){
            int temp = arr[i-1];
            arr[i-1] = arr[j-1];
            arr[j-1] = temp;
            i++, j--;
        }
    }

    for(int a = 0; a < N; a++) printf("%d ", arr[a]);
    return 0;
}