#include "stdio.h"

int f;

int main()
{
	for(f=0; f<=300; f=f+20)
	{
		printf("%3d%9.1f\n", f, (5.0/9.0)*(f-32));
	}
	return 0;
}
