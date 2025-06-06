#include <stdio.h>

int main(void) {
    long long int N;
    int i = 0, B, arr[1000];
    char temp;
    scanf("%lld %d", &N, &B);

    while (1) {
        arr[i++] = N % B;
        N = N / B;
        if (N < B) {
            arr[i] = N % B;
            if(arr[i] == 0) i--;
            break;
        }
    }
    for (; i >= 0; i--) {
        if (arr[i] < 10) {
            printf("%d", arr[i]);
        }
        else {
            temp = arr[i] - 10 + 'A';
            printf("%c", temp);
        }
    }
    return 0;
}