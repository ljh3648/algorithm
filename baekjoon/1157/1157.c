#include <stdio.h>

int main(void) {
    int arr['Z' - 'A' + 1] = { 0 };
    unsigned char a;

    while (a = fgetc(stdin)) {
        if (a == '\n') break;
        if ('Z' < a) a = a - 32;  // a = 97 , A = 65
        arr[a - 'A']++;
    }

    int max = 0, key;
    int flag = 0;
    for (int i = 0; i < 'Z' - 'A' + 1; i++) {
        if (max < arr[i]) {
            max = arr[i], flag = 0;
            key = i + 'A';
        }
        else if (max == arr[i]) flag = 1;
    }

    if (flag) printf("?\n");
    else printf("%c", key);

    return 0;
}