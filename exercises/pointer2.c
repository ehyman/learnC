#include <stdio.h>

int main(int argc, char *argv[])
{
	//指向常量的指针
	
	int value = 200;
	int value2 = 300;
	int value3 = 400;

	//指针指向的变量的“地址”是常量，试图把指针指向别的地方出错
	int const *pvalue = &value; 
	

	//*pvalue = 300; Error
	
	pvalue = &value2;


	//指针常量
	
	//指针指向的变量的“值”是常量，试图改变值出错
	int *const pvalue2 = &value; 
	
	//pvalue2 = &value2; // Error
	
	*pvalue2 = 400;

	//不能改变指向的地址，也不能改变值
	const int *const ppvalue = &value3; //等价于 const int value3 = 400;
	
	printf("%d\n", *ppvalue);
	//ppvalue = &value2; //Error
	//*ppvalue = 500; //ERROE

	return 0;
}
