#include <stdio.h>

int main(void){
    int arr[30]={0}, N;

    for(int i = 0; i < 28; i++){
        scanf("%d", &N);
        arr[N-1] = 100;
    } 

    int a[2], cnt = 0;
    for(int i = 0; i < 30; i++){
        if(!(arr[i])) a[cnt++] = i+1;
    }

    if(a[0] > a[1]){
        int temp = a[0];
        a[0] = a[1];
        a[1] = temp;
    }

    printf("%d\n%d", a[0], a[1]);

    return 0;
}