#include "stdio.h"
#define IN 1
#define OUT 0

main()
{
	int c;
	int state;
	int nwords;
	int t;

	state = OUT;
	
	nwords = 0;
	t = 0;

	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
			if(t == 1)
			{
				++nwords;
				printf("%s%d", "\tTotal input words:", nwords);
				putchar('\n');
			}
			t = 0;
		}else if(state == OUT)
		{
			state = IN;
			putchar(c);
			t = 1;
		}else{
			putchar(c);
			t = 1;
		}
	}
}

