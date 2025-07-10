#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[6];
	int isEnter;
} Empoly;

int cmp(const void *s1, const void *s2) {
	Empoly a = *(Empoly *)s1;
	Empoly b = *(Empoly *)s2;

	return strcmp(a.name, b.name);
}

int main(void) {
	int n;
	scanf("%d", &n);

	Empoly *empolys = calloc(n, sizeof(Empoly));

	for (int i = 0; i < n; i++) {
		char status[7];

		scanf("%s %s", empolys[i].name, status);

		if (strcmp(status, "enter") == 0) {
			empolys[i].isEnter = 1;
		}
		else if (strcmp(status, "leave") == 0) {
			empolys[i].isEnter = 0;
		}
	}

	qsort(empolys, n, sizeof(Empoly), cmp);

	Empoly *enter_empolys = calloc(n, sizeof(Empoly));
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (strcmp(empolys[i].name, empolys[i + 1].name) == 0) {
			if (i + 1 == n) strcpy(enter_empolys[cnt++].name, empolys[i].name);
			continue;
		}

		if (empolys[i].isEnter) {
			strcpy(enter_empolys[cnt++].name, empolys[i].name);
		}
	}

	qsort(enter_empolys, cnt, sizeof(Empoly), cmp);

	for (int i = cnt - 1; i >= 0; i--) {
		printf("%s\n", enter_empolys[i].name);
	}

	return 0;
}