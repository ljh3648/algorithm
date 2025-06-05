#include <stdio.h>
#include <string.h>
int main(void) {
	char str[100];
	int B, len, temp;
	unsigned long long int result = 0;
	scanf("%s %d", str, &B);
	len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] >= '0' && str[i] <= '9') {
			temp = str[i] - '0';
		}
		else{
			temp = str[i] - 'A' + 10;
		}
		result = (result * B) + temp;
	}
	printf("%llu",result);
	return 0;
}