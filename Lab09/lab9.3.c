#include <stdio.h>
int main ()
{
	int arr[10];
	int i;
	int min, max;
	int countmax, countmin;
	int sum = 0;
	float avg;
	
	printf("These elements of array are:\n ");
	for (i = 0; i < 10; i++)
	{
	scanf("%d", &arr[i]);
	}
	max = arr[0];
	min = arr[0];
	for (i = 0; i < 10; i++)
	{
	if (arr[i] > max)
	max = arr[i];
	
	if (arr[i] < min)
	min = arr[i];
		sum+=arr[i];
	avg = sum / 10;
	}
	countmax = 0;
	countmin = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr[i] == max)
		countmax++;
		if (arr[i] == min)
		countmin++;
	}
	
	printf("\n Highest value: %d", max);
	printf("\n Time for Max: %d", countmax);
	printf("\n Lowest value: %d", min);
	printf("\n Time for Min: %d", countmin);
	printf("\n sum: %d", sum);
	printf("\n avg: %f", avg);
	
}
