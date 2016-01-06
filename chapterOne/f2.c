#include "stdio.h"

void main()
{
	int f;
	for(f=300; f>=0; f=f-20)
	{
		printf("%3d %9.1f\n", f, (5.0/9.0) * (f-32));
	}
}
