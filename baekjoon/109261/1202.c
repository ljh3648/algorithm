#include <stdio.h>

int main(void)
{
    int N = 0, K = 0; // N: 보석 총 갯수, K: 가방 총 갯수
    // M: 해당 보석 무게, V: 해당 보석 가격, C: 해당 가방 최대 무게

    scanf("%d %d", &N, &K);

    int jewel[N][2];
    int bag[K];

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &jewel[i][0], &jewel[i][1]);
    }

    for (int i = 0; i < K; i++)
    {
        scanf("%d", &bag[i]);
    }

    // 무게 대비 비싼 순서대로 재 정렬
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (((float)jewel[i][1] / (float)jewel[i][0]) < ((float)jewel[j][1] / (float)jewel[j][0]))
            {
                int temp[2] = {jewel[i][0], jewel[i][1]};
                jewel[i][0] = jewel[j][0];
                jewel[i][1] = jewel[j][1];
                jewel[j][0] = temp[0];
                jewel[j][1] = temp[1];
            }
        }
    }

    int total = 0;

    // 많은 액수를 챙겨갈 수 있는 경우의 수.
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < K; j++)
        {
            if (bag[j] >= jewel[i][0])
            {
                bag[j] = 0;
                total += jewel[i][1];
                break;
            }
        }
    }

    printf("%d \n", total);

    return 0;
}