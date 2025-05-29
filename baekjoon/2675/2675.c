#include <stdio.h>
#include <string.h>

int main(void){
    int T;
    char str[21];
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int index = 0;
        scanf("%d %s", &index, str);
        for(int j = 0; j < strlen(str); j++){
            int k = index;
            while(k--) printf("%c", str[j]);
        }
        printf("\n");
    }
}