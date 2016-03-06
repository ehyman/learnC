#include <stdio.h>

int main(int argc, char *argv[])
{
	char str[] = "My string.";

	char *p = &str[0];


	printf("The begining address of str is :%p\n", p);

	p = str;

	printf("The address of p is :%p\n", p);

	
	printf("The size of str is :%ld\n", sizeof(str));

	
	printf("The next begining address of str(p+1) is :%p\n", (p+1));

	return 0;
}
