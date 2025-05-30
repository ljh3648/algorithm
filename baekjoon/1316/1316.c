#include <stdio.h>

int main(void) {
    int index;
    scanf("%d", &index);

    char str[index][100];
    for (int i = 0; i < index; i++) {
        scanf("%s", str[i]);
    }

    int cnt = 0;
    for (int i = 0; i < index; i++) {
        int flag = 0;
        int temp['z' - 'a' + 1] = { 0 };
        if (str[i][1] == '\0') {
            cnt++;
            continue;
        }
        cnt++;
        for (int j = 0; str[i][j] != '\0'; j++) {
            if (flag) {
                if (temp[str[i][j] - 'a'] == 1) {
                    cnt--;
                    break;
                }
                else flag = 0;
            }
            temp[str[i][j] - 'a'] = 1;
            if (str[i][j] != str[i][j + 1]) flag = 1;
        }
    }

    printf("%d", cnt);

    return 0;
}