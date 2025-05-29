#include <stdio.h>

int main(void){
    char num1[4] = {0}, num2[4] = {0};

    scanf("%s %s", num1, num2);
    
    char temp = num1[2];
    num1[2] = num1[0];
    num1[0] = temp;

    temp = num2[2];
    num2[2] = num2[0];
    num2[0] = temp;

    int flag = 0;

    for(int i = 0; i < 3; i++){
        if(num1[i] == num2[i]) continue;
        else if(num1[i] > num2[i]){
            flag = 1;
            break;
        }
        else break;
    }

    for(int i = 0; i < 3; i++){
        if(flag) printf("%d", num1[i] - '0');
        else printf("%d", num2[i] - '0');
    }

    return 0;
} 


// 제출번호: 66993059 아이디: asdxcz1245
// #include<stdio.h>

// int main() {
//     int a,b;
//     scanf("%d %d",&a,&b);
    
//     a=a%10*100 + a/10%10*10 + a/100;
//     b=b%10*100 + b/10%10*10 + b/100;
    
//     printf("%d", a>b ? a:b);
// }