#include<stdio.h>
#include<string.h>

int main()
{
	char n[8] = {0};
	int arr[10] = { 0 };
	int max = 0;


	scanf_s("%s", n);
	int count = strlen(n);
	for (int i = 0; i < count; i++)
	{
		int a = n[i] - '0';
		arr[a]++;

	}
	int sumsixnine = arr[6] + arr[9];
	arr[6] = (sumsixnine + 1) / 2;
	arr[9] = arr[6];

	for (int i = 0; i < 10; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	
	printf("%d", max);
	
	return 0;
}
