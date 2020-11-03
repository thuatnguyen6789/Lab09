#include <stdio.h>
int main ()
{
	int i;
	int arr[5];
	float Arr[10];
	
	for (i = 0; i <= 4; i++)
	{
		scanf("%d", &arr[i]);
		Arr[i] = arr[i];
	}
	printf("\n%d", arr[i]);
	for (i = 5; i < 10; i++)
	{
		Arr[i] = 0;
	}
	for (i = 0; i <= 9; i++)
	printf("\n%f", Arr[i]);
	
}
