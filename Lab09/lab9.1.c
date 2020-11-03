#include <stdio.h>
int main ()
{
	int arr[10];
	int i;
	
	for (i = 0; i < 10; i++)
	{
	scanf("%d", &arr[i]);
	}
	for (i = 1; i < 10; i+=2)
	printf("\n%d", arr[i]);
	
}
