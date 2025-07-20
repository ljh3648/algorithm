#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	int n, m;
	scanf("%d %d", &n, &m);

	char **n_arr = (char **)calloc(n, sizeof(char *));
	for(int i = 0; i < n; i++){
		char *temp = (char *)calloc(11, sizeof(char));
		scanf("%s", temp);
		n_arr[i] = temp;
	}

	char **m_arr = (char **)calloc(n, sizeof(char *));
	for(int i = 0; i < m; i++){
		char *temp = (char *)calloc(11, sizeof(char));
		scanf("%s", temp);
		m_arr[i] = temp;
	}

	// 문자열 검색할때 이진검색 당연히 되는거겠지?
	return 0;
}