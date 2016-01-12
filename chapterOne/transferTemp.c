#include "stdio.h"
#define LOWER 0
#define UPPER 300
#define STEP 20

/* 函数实现温度转换 */
int transTemInt();

double transTemDouble();

main()
{
	int i;
	for(i=0; i<= UPPER; i=i+STEP)
	{
		printf("%3d%6d%9.2f\n", i, transTemInt(i), transTemDouble(i));
	}
}

int transTemInt(int f)
{
	return 5 * (f-32) / 9;
}

double transTemDouble(int f)
{
	return (5.0/9.0)*(f-32);
}
