#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    int total;

    if (A == B && A == C && B == C)
        total = 10000 + (A * 1000);
    else if (A == B || A == C)
        total = 1000 + (A * 100);
    else if (B == C)
        total = 1000 + (B * 100);
    else
    {
        if (A > B && A > C)
            total = A * 100;
        else if (B > A && B > C)
            total = B * 100;
        else
            total = C * 100;
    }
    printf("%d", total);
    return 0;
}