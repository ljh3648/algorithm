#include <stdio.h>
#include <stdlib.h>

int cmp(const void *n1, const void *n2) {
    long long int a = *(const long long int *)n1;
    long long int b = *(const long long int *)n2;

    if (a > b) {
        return 1;
    }
    else if (a < b) {
        return -1;
    }
    return 0;
}

int main(void) {
    int N;
    scanf("%d", &N);
    long long int X[N], tempX[N];

    for (int i = 0; i < N; i++) {
        scanf("%lld", &X[i]);
        tempX[i] = X[i];
    }

    qsort(tempX, N, sizeof(long long int), cmp);

    int uniqN = 1;
    for (int i = 1; i < N; i++) {
        if (tempX[i] != tempX[uniqN - 1]) {
            tempX[uniqN++] = tempX[i];
        }
    }

    for (int i = 0; i < N; i++) {
        long long int *res = bsearch(&X[i], tempX, uniqN, sizeof(long long int), cmp);
        printf("%ld ", res - tempX);
    }
    return 0;
}