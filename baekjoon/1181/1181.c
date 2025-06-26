#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    char *s1 = *( char ** )a;
    char *s2 = *( char ** )b;
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) {
        return len1 - len2;
    }
    return strcmp(s1, s2);
}


int main(void) {
    int N;
    scanf("%d", &N);

    char *arr[N];
    char str[51];

    for (int i = 0; i < N; i++) {
        scanf("%s", str);
        arr[i] = calloc(strlen(str) + 1, sizeof(char));
        strcpy(arr[i], str);
    }

    qsort(arr, N, sizeof(char *), cmp);

    printf("%s\n", arr[0]);
    
    for (int i = 1; i < N; i++) {
        if (strcmp(arr[i], arr[i - 1]) != 0) {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}