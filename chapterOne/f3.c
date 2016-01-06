#include "stdio.h"

#define LOWER 0
#define UPPER 300
#define STEP  20

void main()
{
	int f;
	for(f=LOWER; f<=UPPER; f=f+STEP)
	{
		printf("%3d%9.1f\n", f, (5.0/9.0)*(f-32));
	}
}
