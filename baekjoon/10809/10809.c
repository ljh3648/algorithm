#include <stdio.h>
#include <string.h>

int main(void){
    char arr[100], a['z' - 'a'];
    scanf("%s",arr);
    for(int i = 'a'; i <= 'z'; i++){
        a[i] = -1;
        for(int j = 0; j < strlen(arr); j++){
            if(arr[j] == i){
                a[i] = j;
                break;
            } 
        }
        printf("%d ", a[i]);
    }
    return 0;
}