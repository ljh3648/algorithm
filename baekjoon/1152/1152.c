// 좀 냄새나는 코드인데...
#include <stdio.h>
#include <string.h>

int main(void){
    char str[1000200];
    int cnt = 0;
    fgets(str, sizeof(str), stdin); // 개행문자가 하나 첨가된다는 사실....
    int size = strlen(str) - 1; // 그래서 개행문자 하나 빼줘야 함...

    for(int i = 0; i < size; i++){
        if( (i == 0) && (str[i] == ' ') ) continue;
        else if( (i == size-1) && (str[i] == ' ') ){
            cnt++;
            break;
        }

        if(str[i] == ' ') cnt++;
        else if( (i == size-1) && (str[i] != ' ') ) cnt++;
    }
    printf("%d", cnt);

    return 0;
} 

// 제출번호 33999804 아이디 junseolim0120
// 이분처럼 그냥 앞 뒤 공백으로 채워져 있다면 마이너스로 해도 괜찮을거 같음...

// #include <stdio.h>
// #include <string.h>

// int main(void) {
//   char a[1000002];
//   fgets(a, 1000002, stdin);
//   int b = 0;
//   for(int i = 0; i < strlen(a); ++i){
//     if(a[i] == ' '){
//       ++b;
//     }
//   }
//   if(a[0] == ' '){
//     --b;
//   }
//   if(a[strlen(a)-2] == ' '){
//     --b;
//   }
//   printf("%d", b+1);
//   return 0;
// }
