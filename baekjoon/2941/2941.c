#include <stdio.h>
#include <string.h>

int main(void) {
    char str[200];

    int c_alpha[8] = { 0 };
    scanf("%s", str);
    int size = strlen(str);

    int cnt = 0;
    for (int i = 0; i < size; i++) {
        int flag_2 = (i == size - 1) ? 0 : 1; // 0 앞으로 나올 글자가 없어 1 앞으로 나올글자가 있어 
        int flag_3 = (i == size - 2) ? 0 : 1;
        if (str[i] == 'c' && flag_2) { // 지금 글자가 c이고 앞으로 나올글자가 한개가 더 있을때
            if ((str[i + 1] == '=') || (str[i + 1] == '-')) {
                cnt++;
                i++;
                continue;
            }
        }
        else if (str[i] == 'd' && flag_2) {
            if ((str[i + 1] == 'z') && flag_3) {
                if ((str[i + 2] == '=')) {
                    cnt++;
                    i += 2;
                    continue;
                }
            }
            else if ((str[i + 1] == '-')) {
                cnt++;
                i++;
                continue;
            }
        }
        else if (str[i] == 'l' && flag_2) {
            if ((str[i + 1] == 'j')) {
                cnt++;
                i++;
                continue;
            }
        }
        else if (str[i] == 'n' && flag_2) {
            if ((str[i + 1] == 'j')) {
                cnt++;
                i++;
                continue;
            }
        }
        else if (str[i] == 's' && flag_2) {
            if ((str[i + 1] == '=')) {
                cnt++;
                i++;
                continue;
            }
        }
        else if (str[i] == 'z' && flag_2) {
            if ((str[i + 1] == '=')) {
                cnt++;
                i++;
                continue;
            }
        }
        cnt++;
    }

    printf("%d\n", cnt);
    return 0;
}

// https://www.acmicpc.net/source/13733096
// 여기도 참고하면 좋을듯 strncmp 방식인데 기억이 안나..

// 제출번호 41780620 아이디 ydjeon
// 관점을 '=', '-', 'j' 을 기준으로해서 전에 문제가 뭐였는지
// 확인해서 차감하는 형식도 좋을듯.
// 그러면 트리라고 해야할까 첫 레이어가 확 줄어드는거니..
// #include<stdio.h>
// #include<string.h>

// int main() {
// 	char s[101];
// 	scanf("%s", s);

// 	int count = strlen(s);
	
// 	for (int i = 1; i < strlen(s); i++) {
// 		if (s[i] == 특수문자nt--;
// 			if (s[i - 1] == 'z') {
// 				count--;
// 				if (i >= 2) {
// 					if (s[i - 2] == 'd') {
// 						count--;
// 					}
// 				}
// 			}
// 		}
// 		else if (s[i] == '-') {
// 			if (s[i - 1] == 'c' || s[i - 1] == 'd')
// 				count--;
// 		}
// 		else if (s[i] == 'j') {
// 			if (s[i - 1] == 'l' || s[i - 1] == 'n')
// 				count--;
// 		}
// 	}

// 	printf("%d", count);

// 	return 0;
// }