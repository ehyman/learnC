#include <stdio.h>
//pointer , dreamed pointer!!

void swap(int *, int *);

int main(void)
{
	int num1, num2;

	printf("Please input two number:");
	scanf("%d%d", &num1, &num2);
	swap(&num1, &num2);
	printf("\nOutput is:%d, %d\n", num1, num2);
	return 0;
}

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
