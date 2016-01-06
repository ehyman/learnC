#include "stdio.h"

void main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		if(c == '\t')
		{
			printf("\\t");
		}else if(c == '\n')
		{
			printf("\\b");
		}else if(c == '\\')
		{
			printf("\\\\");
		}else{
			putchar(c);
		}
	}

}
