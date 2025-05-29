#include <stdio.h>

int main(void){
    int N;
    scanf("%d", &N);
    double arr[N];

    for(int i = 0; i < N; i++) scanf("%lf", &arr[i]);
    
    double max = arr[0];
    for(int i = 1; i < N; i++) if(max < arr[i]) max = arr[i];
    
    double total = 0;
    for(int i = 0; i < N; i++){
        arr[i] = (arr[i]/max)*100;
        total += arr[i];
    }

    printf("%.12f", total / N);
    
    return 0;
}