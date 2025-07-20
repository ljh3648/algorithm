#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *s1, const void *s2) {
	const char *a = *( const char ** )s1;
	const char *b = *( const char ** )s2;

	return strcmp(a, b);
}

void search(char **n_arr, int n, char **m_arr,int m){
	int cnt = 0;
	char *result[n];
	for(int i = 0; i < n; i++){
		if (bsearch(&n_arr[i], m_arr, m, sizeof(char *), cmp) != NULL){
			result[cnt++] = n_arr[i];
		}
	}

	printf("%d\n", cnt);

	for(int i = 0; i < cnt; i++){
		printf("%s\n",result[i]);
	}
}

int main(void) {
	int n, m;
	scanf("%d %d", &n, &m);

	char **n_arr = ( char ** )calloc(n, sizeof(char *));
	for (int i = 0; i < n; i++) {
		char *temp = ( char * )calloc(11, sizeof(char));
		scanf("%s", temp);
		n_arr[i] = temp;
	}

	char **m_arr = ( char ** )calloc(n, sizeof(char *));
	for (int i = 0; i < m; i++) {
		char *temp = ( char * )calloc(11, sizeof(char));
		scanf("%s", temp);
		m_arr[i] = temp;
	}

	qsort(n_arr, n, sizeof(char *), cmp);
	qsort(m_arr, m, sizeof(char *), cmp);

	if(n <= m){
		search(n_arr, n, m_arr, m);
	}else{
		search(m_arr, m, n_arr, n);
	}

	return 0;
}