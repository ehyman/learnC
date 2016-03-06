#include <stdio.h>

int main(int argc, char *argv[])
{
	long num1 = 0L;
	long num2 = 0L;

	long *pnum = NULL;

	pnum = &num1;
	*pnum = 2L;

	printf("Address of num1 is %p\n", &num1);
	printf("The value of num1 is %ld\n", num1);
	printf("Address of pnum is %p\n", &pnum);
	printf("The address value of pnum is %p\n", pnum);
	printf("The value of pnum is %ld\n", *pnum);

	++num2;
	num2 += *pnum;

	pnum = &num2;
	++*pnum;

	printf("Address of num2 is %p\n", &num2);
	printf("Address of pnum is %p\n", &pnum);
	printf("The address value of pnum is %p\n", pnum);
	printf("The value of pnum is %ld\n", *pnum);
	
	return 0;
}
