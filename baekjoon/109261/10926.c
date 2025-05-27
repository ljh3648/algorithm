#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    char str1[54];
    char str2[4] = {'?', '?', '!', '\0'};

    fgets(str1, sizeof(str1), stdin);

    str1[strcspn(str1, "\n")] = '\0';

    strncat(str1, str2, strlen(str2) - 1);

    printf("%s", str1);
}