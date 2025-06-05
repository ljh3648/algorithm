#include <stdio.h>

typedef struct point{
    int xpos;
    int ypos;
}Point;

int main(void){
    int n, cnt = 0;
    scanf("%d", &n);
    int paper[100][100] = {0};
    Point arr[100];
    for(int i = 0; i < n; i++){
        scanf("%d %d", &arr[i].xpos, &arr[i].ypos);
        for(int j = 0; j < 10; j++){
            for(int k = 0; k < 10; k++){
                if(paper[arr[i].xpos + j][arr[i].ypos + k] != 1){
                    paper[arr[i].xpos + j][arr[i].ypos + k] = 1;
                    cnt++;
                }
            }
        }
    }
    printf("%d", cnt);
    return 0;
}