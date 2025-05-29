#include <stdio.h>

int main(void){
    int layer;
    scanf("%d",&layer);
    for(int i = 0; i < layer; i++){
        for(int j = layer - i - 1; j > 0; j--) printf(" ");
        for(int j = 0; j <= (i*2); j++) printf("*");
        printf("\n");
    }
    for(int i = 0; i < layer-1; i++){
        for(int j = 0; j < i+1; j++) printf(" ");
        for(int j = (layer-1)*2-1; j > (i*2); j--) printf("*");

        printf("\n");
    }
    return 0;
}