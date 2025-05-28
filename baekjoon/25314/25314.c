#include <stdio.h>

int main(void){
    int input;
    
    scanf("%d", &input);
    for(int i = 0; i < input / 4; i++){
        printf("long ");
    }
    
    printf("int");
    
    return 0;
}