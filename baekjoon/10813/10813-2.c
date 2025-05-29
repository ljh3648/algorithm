// arr[42]로 42나머지 만큼 배열을 선언을 통한 문제 풀이가 있음

#include <stdio.h>

int main(){
    int arr[42] = {0}, val;

    for(int i = 0; i < 10; i++){
        scanf("%d", &val);
        arr[val % 42] = 1;
    }

    int cnt = 0;
    for(int i = 0; i < 42; i++) if(arr[i] == 1) cnt++;
    
    printf("%d ", cnt);
    return 0;
}