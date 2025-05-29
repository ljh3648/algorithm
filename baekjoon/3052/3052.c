#include <stdio.h>

int main(void){
    int arr[10] = {0};

    for(int i = 0; i < 10; i++){
        scanf("%d", &arr[i]);
        arr[i] = arr[i] % 42;
    }

    for(int i = 0; i < 10; i++){
        for(int j = i + 1; j < 10; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } 
        }
    }

    int cnt = 1;
    for(int i = 0; i < 10 - 1; i++){
        if(arr[i] != arr[i+1]) cnt++;
    }

    printf("%d", cnt);

    return 0;
}