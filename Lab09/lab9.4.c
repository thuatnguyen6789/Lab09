#include <stdio.h>
#include <string.h>
int main ()
{
	int i;
	char arr[5][30];
	printf("List of Students:\n ");
	for (i = 0; i < 5; i++)
		{
			printf("Name of student %d", i+1 );
			gets(arr[i]);
		}
		for (i = 0; i < 5; i++)
		{
			printf("\n Name of student %d: %s", i+1, arr[i]);
		}
	
}
