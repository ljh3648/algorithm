#include <stdio.h>

int main(void) {
	int arr[9][9] = { 0 };
	int max = -1;
	int col, row;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				col = i + 1;
				row = j + 1;
			}
		}
	}

	printf("%d\n", max);
	printf("%d %d", col, row);

	return 0;
}