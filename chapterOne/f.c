#include "stdio.h"

int f,c;
int lower,upper,step;

void main()
{
	f = lower = 0;
	upper = 300;
	step = 20;
	while(f <= upper)
	{
		c = 5 * (f-32) / 9;
		printf("%3d%6d\n", f, c);
		f += step;
	}	
}
