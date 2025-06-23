#include <stdio.h>
#include <stdlib.h>

int cmp(const void *n1, const void *n2){
    int a = *(const int*)n1;
    int b = *(const int*)n2;
    if(a > b){
        return -1;
    }
    else if(a < b){
        return 1;
    }
    return 0;
}

int main(void){
    unsigned long int N; 
    scanf("%ld", &N);

    int arr[20], cnt = 0;
    while(N > 0){
        arr[cnt++] = N % 10;
        N /= 10;
    }

    qsort(arr, cnt, sizeof(int), cmp);

    for(int i = 0; i < cnt; i++){
        printf("%d",arr[i]);
    }
    return 0;
}