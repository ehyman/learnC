#include "stdio.h"

/*将输入复制到输出，并将多个空格用一个空格代替*/

void main()
{
	int c;
	int lastc;

	lastc = 0;

	while((c = getchar()) != EOF)
	{
		if(c != ' ')
		{
			putchar(c);
		}else if(lastc != ' ')
		{
			putchar(c);
		}
		lastc = c;
	}
}

/* vim: set ts=4 sw=4 tw=0 noet :*/
