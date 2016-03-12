#include <stdio.h>

// 程序执行把代码和数据载入内存

void main(void)
{
	printf("The address of main function is: %p\n", main);

	int num = 4;
	
	printf("The address of variable num is: %p\n", &num);
}
