#include "stdio.h"

void main()
{
	int c;
	while((c = getchar()) != EOF)
	{
		printf("%s\t%d\n", "The value of EOF is ", EOF);
		putchar(c);
	}
}
