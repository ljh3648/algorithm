#include <stdio.h>
#include <string.h>

int main(void){
    char str[17];
    int time['Z'-'A'+1][1] = {
        2, 2, 2,
        3, 3, 3,
        4, 4, 4,
        5, 5, 5,
        6, 6, 6,
        7, 7, 7, 7,
        8, 8, 8,
        9, 9, 9, 9
    };
    int total = 0;

    scanf("%s", str);
    int index = strlen(str);

    for(int i = 0; i < index; i++){ 
        total += time[str[i]-'A'][0]+1;
    }
    printf("%d",total);

    return 0;
}