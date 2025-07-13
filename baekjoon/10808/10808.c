#include <stdio.h>
#include <string.h>


int main(void) {
	int cnt['z' - 'a' + 1] = { 0 };
	char str[101];

	scanf("%s", str);

	int len = strlen(str);

	for (int i = 0; i < len; i++) {
		cnt[str[i] - 'a']++;
	}
	for(int i = 0; i < 'z' - 'a' + 1; i++){
        printf("%d ", cnt[i]);
    }
	
	return 0;
}