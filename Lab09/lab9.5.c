#include <stdio.h>
int main ()
{
	int arr[4][30];
	int row;
	int col;
	float sum[30];
	
	for (row = 1; row < 5; row++)
	{
		for (col = 1; col < 31; col++)
		{
			printf("\n Point at %d %d: ", row, col);
			scanf("%d", &arr[row][col]);
		}
	}
	for (row = 1; row < 5; row++)
	{
		for (col = 1; col < 31; col++)
		{	
		sum[col]+=arr[col][row];
		printf("\n%f", sum[col] / 4);	
		}
	}
	
	
	
}
