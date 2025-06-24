#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Point;

int cmp(const void *n1, const void *n2) {
    Point a = *( const Point * )n1;
    Point b = *( const Point * )n2;

    if (a.x < b.x) {
        return -1;
    }
    else if(a.x > b.x){
        return 1;
    }
    else{
        if(a.y < b.y){
            return -1;
        }
        else if(a.y > b.y){
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int N;
    scanf("%d", &N);
    Point arr[N];

    for(int i = 0; i < N; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }

    qsort(arr, N, sizeof(Point), cmp);

    for(int i = 0; i < N; i++){
        printf("%d %d\n", arr[i].x, arr[i].y);
    }
    
    return 0;
}