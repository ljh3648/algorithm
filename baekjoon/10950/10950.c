#include <stdio.h>

int main(void){
    int T;
    scanf("%d", &T);
    
    int arr[T];
    int a, b;
    for(int i=0; i<T; i++){
        scanf("%d %d", &a, &b);
        arr[i] = a + b;
    }

    for(int i=0; i<T; i++){
        printf("%d\n", arr[i]);
    }
    
    return 0;
}