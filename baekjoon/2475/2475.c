#include <stdio.h>

int main(void)
{
	int arr[5], total = 0;
	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		arr[i] *= arr[i];
		total += arr[i];
	}

	printf("%d", total % 10);

	return 0;
}