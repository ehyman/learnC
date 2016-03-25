#include <stdio.h>
#define MAX_LENGTH 10

int main(int argc, char *argv[])
{
	int a[MAX_LENGTH] = {};
	int i = 0;
	int j = 0;
	
	printf("Please input %d numbers:\n", MAX_LENGTH);
	for(i=0; i<MAX_LENGTH; ++i)
	{
		scanf("%d", &a[i]);
	}

	
	for(i=0; i<MAX_LENGTH; ++i)
	{
		for(j=0; j<MAX_LENGTH-1; ++j)
		{
			int tmp = 0;
			if(a[j] > a[j+1])
			{
				tmp = a[j];
				a[j] = a[j+1];
				a[j+1] = tmp;
			}
		}
	}

	printf("after bubble sort:\n");
	for(j=0; j<MAX_LENGTH; ++j)
	{
		printf("%d ", a[j]);
	}
	printf("\n");

	return 0;
}
