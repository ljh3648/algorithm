#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int s, e;
}RainPos;

int main() {
	int n, m;
	scanf("%d %d", &n, &m);

	int *k = (int *)calloc(n, sizeof(int)); // 지형 높이
	for(int i = 0; i < n; i++){
		scanf("%d", &k[i]); // -100,000 <= k <= 100,000
	}

	// 장마 처리
	int *rain_hight = (int *)calloc(n, sizeof(int)); // 물 높이
	RainPos *pos = (RainPos *)calloc(m, sizeof(RainPos));
	
	for(int i = 0; i < m; i++){		
		scanf("%d %d", &pos[i].s, &pos[i].e); // 1 <= s,e <= n, 비가 내릴 지역
		
		for(int j = pos[i].s - 1; j < pos[i].e; j++){ // 비 내림
			rain_hight[j]++;
		}

		int *rain_blade_house = (int *)calloc(n, sizeof(int)); // 배수 할 지역
		if((i + 1) % 3 == 0){ // 배수 하는 날
			for(int j = i - 2; j <= i; j++){ // 배수할 지역 기록
				for(int k = pos[j].s - 1; k < pos[j].e; k++){
					rain_blade_house[k] = 1;
				}
			}

			for(int j = 0; j < n; j++){
				if(rain_blade_house[j] == 1) rain_hight[j]--;
			}
		}
		free(rain_blade_house);
		
	}

	// 땅 높이 조절
	for(int i = 0; i < n; i++){
		k[i] += rain_hight[i];
		printf("%d ", k[i]);
	}
	
	return 0;
}
