#include "stdio.h"
#define IN 1
#define OUT 0

main()
{
	int c;
	int state;
	int t;
	state = OUT;
	t = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
			if(t == 1)
			{
				printf("\n");
			}
			t = 0;

		}else if(state == OUT)
		{
			state = IN;
			t = 1;
		}
		if(t == 1)
		{
			putchar(c);
		}
	}
}
