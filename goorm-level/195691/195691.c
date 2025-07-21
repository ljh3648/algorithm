#include <stdio.h>
//
int n, k;
char arr[200][200];
int result[200][200] = {0};

void boom(int y, int x){
	x--, y--;
	if(y > -1 && y < n && x > -1 && x < n && arr[y][x] != '#'){
		if(arr[y][x] == '@'){
			result[y][x]+=2;
		}
		else{
			result[y][x]++;
		}
	}
}

int main() {
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf(" %c", &arr[i][j]);
		}
	}

	int x, y;
	for(int i = 0; i < k; i++){
		scanf("%d %d", &y, &x);
		boom(y - 1, x);
		boom(y, x - 1);
		boom(y, x);
		boom(y, x + 1);
		boom(y + 1, x);
	}

	int max = 0;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(max < result[i][j]) max = result[i][j];
		}
	}

	printf("%d", max);

	return 0;
}
