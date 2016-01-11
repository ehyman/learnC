#include "stdio.h"
int power(int m, int n);

int main()
{
	int i;
	for(i=0; i<=10; ++i)
	{
		printf("%s%d%s%d\n", "2^", i, " = ", power(2, i));
	}
	return 0;
}

int power(int base, int n)
{
	int i;
	int p;
	p = 1;
	for(i=1; i<=n; ++i)
	{
		p = base * p;
	}
	return p;
}
