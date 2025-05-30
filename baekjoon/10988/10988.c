#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200] = { 0 };
    scanf("%s", str);

    int j = strlen(str);
    for (int i = 0; i < j; i++) {
        if (str[i] == str[j - 1]) {
            j--;
            continue;
        }
        else {
            printf("0");
            return 0;
        }
    }

    printf("1");
    return 0;
}