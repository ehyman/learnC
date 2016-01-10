#include "stdio.h"

int power(int m, int n);

main()
{
	printf("%s\t%d\n","3^3 = ", power(3, 3));
}

int power(int base, int n)
{
	int i;
	int p;
	p = base;
	for(i = 1; i< n; ++i)
	{
		p = base * p;
	}
	return p;
}
