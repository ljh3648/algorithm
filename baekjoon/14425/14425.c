#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *s1, const void *s2){
    return strcmp((const char *)s1, (const char *)s2);
}

int main(void) {
    int N, M, cnt = 0;

    scanf("%d %d", &N, &M);
    char str[N][501];

    for (int i = 0; i < N; i++) {
        scanf("%s", str[i]);
    }

    qsort(str, N, sizeof(str[0]), cmp);

    char temp[501];
    for (int i = 0; i < M; i++) {
        scanf("%s", temp);
       if(bsearch(temp, str, N, sizeof(str[0]), cmp) != NULL) cnt++;
    }

    printf("%d", cnt);
    return 0;
}